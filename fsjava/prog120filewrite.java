//Display properties of file

import java.util.*;
import java.io.*;

class prog120filewrite
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the  name of  file");
        String FileName=sobj.nextLine();

        try
        {
            System.out.println("Enter data that youwant to write");
            String Data=sobj.nextLine();

            FileOutputStream fobj=new FileOutputStream(FileName,true);
            byte arr[]=Data.getBytes();//conversion of characters of string into character

            fobj.write(arr);
            fobj.close();
        }
        catch(Exception obj)
        {
            System.err.println("Exception occured");
        }
        
    }
}