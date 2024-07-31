//convert decimal numbers into binary
//note::outpt is reversed

import java.util.*;

public class prog89bitmani {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        int iNo=0,iDigit=0;
        iNo=sobj.nextInt();

        while(iNo!=0)
        {
            iDigit=iNo%2;
            iNo=iNo/2;
            System.out.print(iDigit);
        }
        System.out.println();
    }
}
