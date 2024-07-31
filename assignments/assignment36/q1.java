//Accept two strings and concat n characters of second string after first string. N must be accepted from user
// Accept two strings and check whether contents of both strings are same or not
// Accept two strings and check whether fist n contents of both strings are same or not . if n is greater than length conctat complete second string
// Accept strng from user and reverse the string by togling the case
//Accept the string from user and check if it is a palindrome or not without considering the case

import java.util.Scanner;

public class q1{
    public static String concat(String s1,String s2,int n)
    {
        for(int i=0;i<n;i++)
        {
            s1=s1+s2.charAt(i);
        }
        return s1;
    }
    public static boolean check(String s1,String s2)
    {
        for(int i=1;i<s2.length();i++)
        {
            if(s1.charAt(i)!=s2.charAt(i))
            {
                return false;
            }
        }
        return true;
    }
    public static boolean checklen(String s1,String s2,int n)
    {
        for(int i=1;i<n;i++)
        {
            if(s1.charAt(i)!=s2.charAt(i))
            {
                return false;
            }
        }
        return true;
    }
    public static String caserev(String s1)
    {
        String s2="";
        for(int i=s1.length()-1;i>=0;i--)
        {
            if(s1.charAt(i)>='A' && s1.charAt(i)<='Z')
            {
                s2=s2+s1.toLowerCase();
                
            }
            else if(s1.charAt(i)>97 && s1.charAt(i)<122)
            {
                s2=s2+s1.toUpperCase();
                System.out.println(s2);
            }
        }
        return s2;
    }
   
     public static boolean palindrome(String str)
    {
        String rev = "";
        boolean ans = false;
 
        for (int i = str.length() - 1; i >= 0; i--) {
            rev = rev + str.charAt(i);
        }
        if (str.equals(rev)) {
            ans = true;
        }
        return ans;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        String s1,s2,sret;
        boolean bret=false;

        System.out.println("-----------------------Function 1-------------------------");

        System.out.println("Enter 1st string: ");
        s1=sobj.nextLine();
        
        System.out.println("Enter 2nd string: ");
        s2=sobj.nextLine();
        
        System.out.println("Enter n : ");
        int n=sobj.nextInt();
        sret=concat(s1,s2,n);
        System.out.println("New string: "+sret);

        System.out.println("-----------------------Function 2-------------------------");
        bret=check(s1, s2);
        if(bret==true)
        {
            System.out.println("Both strings are equal");
        }
        else{
            System.out.println("Both strings are not equal");
        }
        
        System.out.println("-----------------------Function 3-------------------------");
        System.out.println("Enter length till checking equal or not ");
        n=sobj.nextInt();
        bret=checklen(s1, s2,n);
        if(bret==true)
        {
            System.out.println("Both strings are equal upto "+n+" characters");
        }
        else
        {
            System.out.println("Both strings are not equal");
        }

        System.out.println("-----------------------Function 4-------------------------");
        sret=caserev(s1);
        System.out.println("Reversed and toggled of "+s1+" is "+sret);

        System.out.println("-----------------------Function 5-------------------------");
        System.out.println("Enter string for checking palindrome");
        s1=sobj.next();
        bret=palindrome(s1);
        if(bret==true)
        {
            System.out.println(s1+" is palindrome..");
        }
        else{
            System.out.println(s1+" is not palindrome..");
        }
    }
}
 