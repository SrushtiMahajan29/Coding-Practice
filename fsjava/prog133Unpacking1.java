import java.util.*;
import java.io.*;

class prog133Unpacking1
{
    public static void main(String arg[]) throws Exception
    {
        
        byte header[]=new byte[100];
        int FileSize=0;
        String str=null;
        int iret=0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of packed file that you want to upack");
        String PackedFile=sobj.nextLine();

        File fobj=new File(PackedFile);
        FileInputStream fiobj=new FileInputStream(fobj);
        

        while((iret=fiobj.read(header,0,100))>0)
        {
            String Hstr = new String(header);

            str=Hstr.trim();
            String Tokens[]=str.split(" ");

            File NewFile=new File(Tokens[0]);

            NewFile.createNewFile();

            // byte buffer[]=new byte[Tokens[1]]; String array element needed to convert nto int 
            FileSize=Integer.parseInt(Tokens[1]);

            byte Buffer[]=new byte[FileSize];
            fiobj.read(Buffer, 0, FileSize);

            FileOutputStream foobj=new FileOutputStream(NewFile);
            foobj.write(Buffer,0,FileSize);
        }
    }
}
