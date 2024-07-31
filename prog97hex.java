//hexadecimal numbering system makes work easy for creating mask
/*binary
 bin  dec  hex
 0000 -0   0      nibble- its used bcoz we need 0-15(hex)
 0001 -1   1
 0010 -2   2
 0011 -3   3
 0100 -4   4
 0101 -5   5
 0110 -6   6
 0111 -7   7
 1000 -8   8
 1001 -9   9
 1010 -10  A
 1011 -11  B
 1100 -12  C
 1101 -13  D
 1110 -14  E
 1111 -15  F
 */
//convert decimal numbers into binary and check if 3rd bit is on or off
//note::outpt is reversed

import java.util.*;

public class prog97hex {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        int iNo=0,iDigit=0,count=0;
        iNo=sobj.nextInt();
        
        int imask=  ;
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

