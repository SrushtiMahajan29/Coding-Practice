import java.util.*;
import java.io.*;

class prog133Unpacking
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name of packed file that you want to upack");

        String PackedFile=sobj.nextLine();

        System.out.println("");

        File fobj=new File(PackedFile);
        FileInputStream fiobj=new FileInputStream(fobj);
        
        byte header[]=new byte[100];

        
        fiobj.read(header,0,100);

        System.out.println(header);
        String Hstr = new String(header);

        System.out.println(Hstr);
        System.out.println("Length of header string is : "+Hstr.length());
    
        String str=Hstr.trim();
        System.out.println("Length of final header "+str.length());

        String Tokens[]=str.split(" ");
        
        System.out.println("Name of file "+Tokens[0]);
        System.out.println("Size of file "+Tokens[1]);

        File NewFile=new File(Tokens[0]);

        NewFile.createNewFile();

        // byte buffer[]=new byte[Tokens[1]]; String array element needed to convert nto int 
        int FileSize=Integer.parseInt(Tokens[1]);

        byte Buffer[]=new byte[FileSize];
        fiobj.read(Buffer, 0, FileSize);

        FileOutputStream foobj=new FileOutputStream(NewFile);
        foobj.write(Buffer,0,FileSize);
    }
}
