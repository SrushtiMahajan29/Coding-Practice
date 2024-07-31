
//Write a java program which accepts string from user and check if it contain vowels or not

import java.util.*;

public class q2 {
    public static boolean vowels(String str)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u')
            {
                return true;
            }

        }
        return false;
    }

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        boolean bret=false;

        System.out.println("Enter a string : ");
        String str=sobj.nextLine();

        bret=vowels(str);
        
        if(bret==true)
        System.out.println("There are vowels present");
        else
        System.out.println("There are no vowels present");
    }
}
