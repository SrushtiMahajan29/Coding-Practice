import java.util.*;
import java.io.*;
class prog114file{
    public static void main(String arg[])throws IOException
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the  name of  file");
        String FileName=sobj.next();

        File fobj=new File(FileName);
        boolean bret =false;

        bret=fobj.createNewFile();


        if(bret==true)
        {
            System.out.println("File gets successfully created..");
        }
        else{
            System.out.println("Unable to create file");
        }
    }
}