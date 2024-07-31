//Check directory present or not and number of files in directory

import java.util.*;
import java.io.*;

class prog125directory
{
    public static void main(String arg[]) throws IOException
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the  name of directory: " );
        String DirectoryName=sobj.nextLine();

        boolean bret=false;
        File fobj=new File(DirectoryName);

        bret=fobj.isDirectory();
        if(bret==true)
        {
            System.out.println("Directory is present");

            File arr[]=fobj.listFiles();
            System.out.println("Number of files in directory are : "+arr.length);
        }
        else{
            System.out.println("There is no such directory.");
        }
    }
}