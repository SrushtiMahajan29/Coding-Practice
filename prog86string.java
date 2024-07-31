//ADDition function
import java.util.*;
public class prog86string {
    public static void display(String str)
    {
        System.out.println("Your name is: ");
        for(int i=0;i<str.length();i++)
        {
            System.out.print( str.charAt(i) );    
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str="NULL";
        
        System.out.println("Enter name");
        str=sobj.nextLine();

       display(str);

        System.out.println("Length of name is "+str.length());//method length so()
    }
}