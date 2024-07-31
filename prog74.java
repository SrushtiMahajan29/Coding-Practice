import java.util.*;

class Arithmetic{
    public int Addition(int ivalue1,int ivalue2)//Main function aslelya class madhe dusra class lihit asal tr to static pahije
    {
        int isum=ivalue1+ivalue2;
        return isum;
    }
}

public class prog74{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        Arithmetic aobj=new Arithmetic();
        int ino1=0;
        int ino2=0;
        int ians=0;

        System.out.println("Enter one number: ");
        ino1=sobj.nextInt();
        System.out.println("Enter second number: ");
        ino2=sobj.nextInt();

        ians=aobj.Addition(ino1,ino2);
        System.out.println("Addition is "+ians);
    }
}