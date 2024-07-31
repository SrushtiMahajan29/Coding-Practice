//Display properties of file

import java.util.*;
import java.io.*;

class prog118filewrite{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the  name of  file");
        String FileName=sobj.nextLine();

        try
        {
            System.out.println("Enter data that youwant to write");
            String Data=sobj.nextLine();

            FileWriter fwobj=new FileWriter(FileName);
            fwobj.write(Data);
            fwobj.close();
            
        }
        catch(Exception obj)
        {
            System.err.println("Exception occured");
        }
        
    }
}