
//convert decimal numbers into binary and count nnumber 1 bits in binary number
//note::outpt is reversed

import java.util.*;

public class prog90bitmani {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number");
        int iNo=0,iDigit=0,count=0;
        iNo=sobj.nextInt();

        while(iNo!=0)
        {
            iDigit=iNo%2;
            iNo=iNo/2;
            if(iDigit==1)
            {
                count++;
            }
        }
        System.out.println("Number of 1 bits are :"+count);
    }
}
