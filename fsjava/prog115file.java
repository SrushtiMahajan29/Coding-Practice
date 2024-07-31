//create new file

import java.util.*;
import java.io.*;
class prog115file{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the  name of  file");
        String FileName=sobj.next();

        try
        {
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
        catch(IOException obj)
        {
            System.err.println("Exception occured");
        }
        catch(Exception obj)
        {
            System.err.println("Exception occured");
        }
        
    }
}