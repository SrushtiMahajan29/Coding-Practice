
//Write a java program which accepts string from user and check if it contain vowels or not

import java.util.*;

public class q3reverse {
    public static void reverse(String str)
    {
        char arr[]=new char[str.length()];
        for(int i=str.length()-1,j=0;i>=0;i--,j++)
        {
            arr[j]=str.charAt(i);
        }
         System.out.println("Reversed string is : ");
        for(int i=0;i<str.length();i++)
        {
        System.out.print(arr[i]);

        }
        // arr.toString();
        // System.out.println("Reversed string is : "+arr);
    }

    public static void main(String arg[]) 
    {
        Scanner sobj=new Scanner(System.in);
        boolean bret=false;

        System.out.println("Enter a string : ");
        String str=sobj.nextLine();
        reverse(str);
    }
}
