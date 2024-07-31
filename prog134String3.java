import java.util.*;
import java.io.*;

//trim and remove extra white spaces

public class prog134String3{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string : ");    
        String str=sobj.nextLine();

        str=str.trim();
        System.out.println("After trim: "+str);
        str=str.replaceAll(" ","");
        System.out.println("After replace all : "+str);
    }
    
}
 