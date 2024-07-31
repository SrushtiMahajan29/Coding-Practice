import java.util.*;
import java.io.*;

public class prog134String2{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        String str="Hello world";

        str=str.replaceAll("l","_");

        System.out.println("Length of string"+str+"is "+ str.length());
    }
    
}
