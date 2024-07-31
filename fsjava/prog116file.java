//check file already present or not
import java.util.*;
import java.io.*;
class prog116file{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the  name of  file");
        String FileName=sobj.next();

        try
        {
            File fobj=new File(FileName);
            boolean bret =false;

            bret=fobj.exists();
            if(bret==true)
            {
                System.out.println("File is already present..");
            }
            else{
                System.out.println("File is not present");
            }
        }
        catch(Exception obj)
        {
            System.err.println("Exception occured");
        }
        
    }
}