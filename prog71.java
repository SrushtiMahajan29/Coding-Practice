import java.util.*;
public class prog71{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);//Scanner is widely preffered over buffered reader because 1.Easy object creation2.Easy input acceptance  **3.no exception handling needed**
        int ino1=0;
        int ino2=0;
        int ians=0;

        System.out.println("Enter one number: ");
        ino1=sobj.nextInt();
        System.out.println("Enter second number: ");
        ino2=sobj.nextInt();

        ians=ino1+ino2;

        System.out.println("Addition is "+ians);

    }
}