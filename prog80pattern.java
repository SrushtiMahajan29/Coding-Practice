// ip:5
// op: *
//     **
//     ***
//     ****
//     *****


import java.util.*;
public class prog80pattern {
    public static void pattern(int iNo)
    {
        for(int i=1;i<=iNo;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }

    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iValue=0,iret=0;
        System.out.println("Enter number");
        iValue=sobj.nextInt();

        pattern(iValue);
    }
}
