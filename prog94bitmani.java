//convert decimal numbers into binary and check if 17th bit is on or off
//only upyo 32 bits (bcoz 4 byte integers)(4*8)(1byte =8 bits)

import java.util.*;

public class prog94bitmani {
    public static boolean checkBit(int no)
    {
        int imask=65536;//100000000
        int iresult=0;

        iresult=no & imask;

        if (iresult==imask) {
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        int iNo=0;
        boolean iret=false;
        iNo=sobj.nextInt();

        iret=checkBit(iNo);
        if(iret==true)
        {
            System.out.println("17th bit is on");
        }
        else{
            System.out.println("17th bit is off");
        }
    }
}
