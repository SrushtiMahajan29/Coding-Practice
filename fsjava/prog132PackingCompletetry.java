import java.util.*;
import java.io.*;

class prog132PackingCompletetry{
    public static void main(String arg[]) throws IOException
    {
        Scanner sobj=new Scanner(System.in);
        boolean bret=false;
        
        System.out.println("Enter name of existing directory");
        String directoryName=sobj.nextLine();   
       
        System.out.println("Enter name of new packed file");
        String packedFile=sobj.nextLine();   

        File packobj=new File(packedFile);

        bret=packobj.createNewFile();

        if(bret==false)
        {
            System.out.println("File not created succesfully");
            return;
        }

        System.out.println("Packed file created successfully");

        File dobj=new File(directoryName);
        bret=dobj.isDirectory();
        if(bret==true)
        {
            File Arr[]=dobj.listFiles();

            System.out.println("Number offiles in given directory is : "+Arr.length);

            String header=null;

            FileOutputStream fcombine=new FileOutputStream(packedFile);

            int iret=0;
            byte buffer[]=new byte[1024];

            System.out.println("Packing activity started");

            for(int i=0;i<Arr.length;i++)
            {
                header=Arr[i].getName()+" "+Arr[i].length();

                for(int j=header.length();j<100;j++)
                {
                    header=header+" ";
                }

                byte hArr[]=header.getBytes();

                fcombine.write(hArr,0,100);

                FileInputStream fiobj=new FileInputStream(Arr[i]);

                while((iret=fiobj.read(buffer))!=-1)
                {
                    fcombine.write(buffer, 0, iret);
                }

                fiobj.close();
            }
            System.out.println("Packing completed");
            System.out.println("Total files packed "+Arr.length);
            System.out.println("Thank you for using my file packer");


        }
        else{
            System.out.println("Unable to find such a directory");
        }
        

         

    }
}
