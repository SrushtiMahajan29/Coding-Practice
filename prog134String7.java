import java.io.*;
import java.util.*;

class prog134String7
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");

        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s"," ");
        String words[]=str.split(" ");

        for(String s: words)
        {
            System.out.println(s);
        }

    }
}

