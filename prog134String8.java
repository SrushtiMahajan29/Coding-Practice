import java.io.*;
import java.util.*;
//Dispaly words and their length from sentencce
class prog134String8
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s"," ");
        String words[]=str.split(" ");

        for(int i=0;i<words.length;i++)
        {
            System.out.println("Word is "+words[i]+" having length "+words[i].length());
        }

    }
}

