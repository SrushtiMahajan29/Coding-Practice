//convert decimal numbers into binary and check if 3rd bit is on or off
//note::outpt is reversed

import java.util.*;

public class prog91bitmani {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        int iNo=0,iDigit=0,count=0;
        iNo=sobj.nextInt();
        
        int imask=4;
        int iresult=0;

        iresult=iNo & imask;

        if (iresult==imask) {
            System.out.println("3rd bit is on");
        }
        else{
            System.out.println("3rd bit is off");
        }
    }
}
