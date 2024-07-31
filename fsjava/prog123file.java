//read data from file and write it into a new file

import java.util.*;
import java.io.*;

class prog123file
{
    public static void main(String arg[]) throws IOException
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the  name of source file which is existing");
        String SrcFile=sobj.nextLine();

        System.out.println("Enter name of destination file");
        String DestFile=sobj.nextLine();

        File fobj=new File(SrcFile);
        if(!fobj.exists())
        {
            System.out.println("Source file is not existing");
            return;
        }

        File fobj1=new File(DestFile);

        fobj1.createNewFile();

        FileInputStream fiobj=new FileInputStream(SrcFile);
        FileOutputStream foobj=new FileOutputStream(DestFile);

        byte Buffer[]=new byte[1024];

        int iret=0;

        while((iret=fiobj.read(Buffer))!=-1)
        {
            foobj.write(Buffer,0,iret);//start writing from first index upto readed data
        }

        fiobj.close();
        foobj.close();
    }
}