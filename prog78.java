import java.util.*;
public class prog78 {
    public static int factorial(int iNo)
    {
        int fact=1,i=iNo;
        // for(int i=iNo;i>0;i--)
        // {
        //     fact=fact*i;
        // }
        while(i>0)
        {
            fact=fact*i;
            i--;
        }
        return fact;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iValue=0,iret=0;
        System.out.println("Enter number");
        iValue=sobj.nextInt();

        iret=factorial(iValue);
        System.out.println("Factoril of "+iValue+" is "+iret);

    }
}
