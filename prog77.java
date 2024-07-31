import java.util.*;
import Marvellous.Arithmetic;
public class prog77{
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