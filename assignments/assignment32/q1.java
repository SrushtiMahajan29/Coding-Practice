
//Write a java program which accepts string from user and count number of capital letters , small letters, difference between frequency of capital and small letters

import java.util.*;

public class q1 {
    public static int capCount(String str)
    {
        int count=0;

        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z')
            {
                count++;
            }
        }
        return count;
    }
    public static int smallCount(String str)
    {
        int count=0;

        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='a' && str.charAt(i)<='z')
            {
                count++;
            }
        }
        return count;
    }
    public static int diffCount(String str)
    {
        int count1=0,count2=0;

        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z')
            {
                count1++;
            }
        }
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='a' && str.charAt(i)<='z')
            {
                count2++;
            }
        }
        if(count1>count2)
        {
            return count1-count2;
        }
        else
        {
            return count2-count1;
        }
        
    }

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iret1=0,iret2=0,iret3=0;
        System.out.println("Enter a string : ");
        String str=sobj.nextLine();
        iret1=capCount(str);
        iret2=smallCount(str);
        iret3=diffCount(str);
        System.out.println("Number of capital letters in given string are : "+iret1);
        System.out.println("Number of small letters in given string are : "+iret2);
        System.out.println("Dfference of capital letters and small letters in given string are : "+iret3);
    }
}
