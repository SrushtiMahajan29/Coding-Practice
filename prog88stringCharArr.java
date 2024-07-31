//ADDition function
import java.util.*;
public class prog88stringCharArr {
    public static int capString(char Brr[])
    {
        int iSize=Brr.length;//length prop so no()
        System.out.println("Elements of array are");
        for(int i=0;i<iSize;i++)
        {
            System.out.println(Brr[i]);       
        } 

        int cap=0;
        for(int i=0;i<iSize;i++)
        {
            if(Brr[i]>='A' && Brr[i]<='Z')
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

        str=str.toCharArray();

        //In java there is no "\0" at the end of the string 
        iret=capString(str[]);
        System.out.println("Number of capital letters in string is "+iret);//method length so()
    }
}