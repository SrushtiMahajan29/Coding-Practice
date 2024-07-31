//ADDition function
import java.util.*;
public class prog84string {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str="NULL";
        
        System.out.println("Enter name");
        str=sobj.nextLine();
        System.out.println("Your name is"+str);
        System.out.println("Length of name is "+str.length());//method length so()
    }
}