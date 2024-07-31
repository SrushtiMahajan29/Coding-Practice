//convert decimal numbers into binary and check if 9th bit is on or off
//note::outpt is reversed

import java.util.*;

public class prog93bitmani {
    public static boolean checkBit(int no)
    {
        int imask=256;//100000000
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
            System.out.println("9th bit is on");
        }
        else{
            System.out.println("9th bit is off");
        }
    }
}
