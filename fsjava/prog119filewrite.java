//Display properties of file

import java.util.*;
import java.io.*;

class prog119filewrite
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the  name of  file");
        String FileName=sobj.nextLine();

        try
        {
            System.out.println("Enter data that you want to write");
            String Data=sobj.nextLine();

            FileOutputStream fobj=new FileOutputStream(FileName);
            byte arr[]=Data.getBytes();

            fobj.write(arr);
            fobj.close();
        }
        catch(Exception obj)
        {
            System.err.println("Exception occured");
        }
        
    }
}