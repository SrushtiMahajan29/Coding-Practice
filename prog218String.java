// Take a String and reveerse it
// Split at " "

import java.util.*;

class prog218String{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the sentence");
        String str=sobj.nextLine();

        StringBuffer sbobj=new StringBuffer(str);

        sbobj=sbobj.reverse();

        System.out.println("Updated string is "+sbobj);
    }
} 

