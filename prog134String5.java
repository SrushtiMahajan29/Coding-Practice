import java.io.*;
import java.util.*;

class prog134String5{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the string");

        String str=sobj.nextLine();

        str=str.trim();
        System.out.println("After trim : "+str);

        str=str.replaceAll("\\s"," ");

        System.out.println("After replacement "+str);
        String words[]=str.split(" ");

        System.out.println("Number of words in the sentence are : "+words.length);

        for(int i=0;i<words.length;i++)
        {
            System.out.println(words[i]);
        }
    }
}

