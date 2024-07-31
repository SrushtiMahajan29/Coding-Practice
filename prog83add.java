//ADDition function
import java.util.*;
public class prog83add {
    public static int Addition(int Brr[])
    {
        int iSize=Brr.length;//length prop so no()
        int sum=0;
        for(int i=0;i<iSize;i++)
        { 
            sum=sum+Brr[i];
        } 
        return sum;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iSize=0,ret=0;

        System.out.println("Enter number of elements");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter elements");
        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sobj.nextInt();
        }

        ret=Addition(Arr);
        System.out.println("Addition of elements is"+ret);
    }
}