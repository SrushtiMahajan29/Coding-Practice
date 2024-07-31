import java.io.*;
public class prog72 {
    public static void main(String arg[]) throws Exception
    {
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
        int ino1=0;
        int ino2=0;
        int ians=0;
        
        System.out.println("Enter one number: ");
        ino1= Integer.parseInt(bobj.readLine());
        System.out.println("Enter second number: ");
        ino2= Integer.parseInt(bobj.readLine());

        ians=ino1+ino2;

        System.out.println("Addition is "+ians);
        bobj.close();
    }
   }