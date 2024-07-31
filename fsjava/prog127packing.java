//Check directory present or not and Give names of files in directory

import java.util.*;
import java.io.*;

class prog127packing
{
    public static void main(String arg[]) throws IOException
    {
        Scanner sobj=new Scanner(System.in);
        boolean bret=false;
        System.out.println("Enter the  name of directory: " );
        String DirectoryName=sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to create: ");
        String PackedFile=sobj.nextLine();

        File fobjPack = new File(PackedFile);

        bret =fobjPack.createNewFile();
        if(bret==false)
        {
            System.out.println(("Unable to create packed file"));
            return;
        }

        File fobj=new File(DirectoryName);

        bret=fobj.isDirectory();
        if(bret==true)
        {
            System.out.println("Directory is present");

            File arr[]=fobj.listFiles();
            System.out.println("Number of files in directory are : "+arr.length);

            for(int i=0;i<arr.length;i++)
            {
                System.out.println(arr[i].getName());
            }
        }
        else{
            System.out.println("There is no such directory.");
        }
    }
}