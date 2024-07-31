import java.util.*;

class Arithmetic{
    public int ivalue1;
    public int ivalue2;

    Arithmetic(int a,int b)
    {
        this.ivalue1=a;//for accessing use this because it will 
        this.ivalue2=b;
    }
    public int Addition()
    {
        int isum=this.ivalue1+this.ivalue2;
        return isum;
    }
}

public class prog76{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        
        int ino1=0;
        int ino2=0;
        int ians=0;

        System.out.println("Enter one number: ");
        ino1=sobj.nextInt();
        System.out.println("Enter second number: ");
        ino2=sobj.nextInt();
        Arithmetic aobj=new Arithmetic(ino1,ino2);
        ians=aobj.Addition();
        System.out.println("Addition is "+ians);
    }
}