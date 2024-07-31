//convert decimal numbers into binary and check if 7th bit *and* 15th bit are on or off
//only upyo 32 bits (bcoz 4 byte integers)(4*8)(1byte =8 bits)

import java.util.*;

public class prog98hex {
    public static boolean checkBit(int no)
    {
        int imask=0x00004040;//0100 0000 0100 0000
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
            System.out.println("7th bit and 15th is on");
        }
        else{
            System.out.println("7th bit and 15th is off");
        }
    }
}
