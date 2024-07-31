//ADDition function
import java.util.*;
public class prog87stringCap {
    public static int capString(String str)
    {
        int cap=0;
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z')
                cap++;
        }
        return cap;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iret=0;
        String str="NULL";
        
        System.out.println("Enter name");
        str=sobj.nextLine();

       iret=capString(str);

        System.out.println("Number of capital letters in string is "+iret);//method length so()
    }
}