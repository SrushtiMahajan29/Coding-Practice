import java.util.*;
import java.io.*;

public class project {
    public static void main(String arg[]) throws IOException
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Menu");
        System.out.println("1. Packing of files");
        System.out.println("2. Unpacking of files");
        System.out.println("Enter your choice : ");

        int choice=sobj.nextInt();

        activity aobj=new activity();

        if(choice==1)
        {
            aobj.packing();
        }
        else if(choice==2)
        {
            aobj.unpacking();
        }
        else
        {
            System.out.println("Entered wrong choice");
        }
    }
}

class activity{

    public void packing() throws IOException
    {
        System.out.println("------------------------------------------------");
        System.out.println("---------- Marvellous Packer Unpacker ----------");
        System.out.println("------------------------------------------------");

        Scanner sobj = new Scanner(System.in);
        boolean bret = false;
  
        System.out.println("Enter the name of Directory which contains all files that you want to pack: ");
        String DirectoryName = sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to create : ");
        String PackedFile = sobj.nextLine();

        File fobjPack = new File(PackedFile);

        bret = fobjPack.createNewFile();
        if(bret == false)
        {
            System.out.println("Unable to create packed file...");
            return;
        }

        System.out.println("Packed file gets succesfully created in current directory.");

        File fobj = new File(DirectoryName);

        bret = fobj.isDirectory();
        if(bret == true)
        {
            File Arr[] = fobj.listFiles();
            System.out.println("Number of files in the directory are : "+Arr.length);

            String Header = null;

            // To write the data into packed file
            FileOutputStream fcombine = new FileOutputStream(PackedFile);
            int iRet = 0;
            byte Buffer[] = new byte[1024];
            
            System.out.println("Packing activity started...");

            // Travel Directory
            for(int i = 0; i < Arr.length; i++)
            {
                // Create header
                Header = Arr[i].getName() + " " + Arr[i].length();
                System.out.println("File packed with the name : "+Arr[i].getName());

                // Add extra white spaces at the end of header
                for(int j = Header.length(); j < 100; j++)
                {
                    Header = Header + " ";
                }

                // Convert string header into byte array
                byte hArr[] = Header.getBytes();

                // Write header into packed file
                fcombine.write(hArr,0,100);

                // To read the file from duirectory
                FileInputStream fiobj = new FileInputStream(Arr[i]);

                // write the data into packed file after header
                while((iRet = fiobj.read(Buffer)) != -1 )
                {
                    fcombine.write(Buffer,0,iRet);
                }
                fiobj.close();
            }

            System.out.println("Packing activity completed..");
            System.out.println("Total file packed succesfully : "+Arr.length);

            System.out.println("------------------------------------------------");
            System.out.println("Thank you for using Marvellous Packer Unpacker");
            System.out.println("------------------------------------------------");
        }
        else 
        {
            System.out.println("There is no such directory");
        }
    }
    



    public void unpacking() throws IOException
    {
        System.out.println("...................................");
        System.out.println(".............File unpacker.........");
        System.out.println("...................................");

        byte header[]=new byte[100];
        int FileSize=0;
        String str=null;
        int iret=0;
        int iCnt=0;

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

            System.out.println(Tokens[0] + " unpacked succesfully");


            iCnt++;
        }

        System.out.println("Unpacking completed");
        System.out.println("Total file unpackedsuccessfully : "+iCnt);

        System.out.println("............................................");
        System.out.println("Thank you for using Marvellous PAcker Unpacker");
        System.out.println("............................................");
    
    }
}