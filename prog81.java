// ip:5
// op: *
//     **
//     ***
//     ****
//     *****


import java.util.*;
public class prog81 {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iSize=0;

        System.out.println("Enter number of elements");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter elements");
        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sobj.nextInt();
        }
        System.out.println("Elements of array are");
        for(int i=0;i<iSize;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}