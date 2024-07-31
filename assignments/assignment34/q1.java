//Accept number from user and return count of even digits
//Accept number from user and return count of odd digits
//Accept number from user and return count of digits between 3 and 7
//Accept number from user and return multiplication of all digits
//Accept number from user and return difference betwwen sum of even digits and odd digits


import java.util.*;

public class q1{
    public static int cnteven(int num)
    {
        int digit=0,cnt=0;
        while(num!=0)
        {
            digit=num%10;
            num=num/10;
            if(digit%2==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
    public static int cntodd(int num)
    {
        int digit=0,cnt=0;
        while(num!=0)
        {
            digit=num%10;
            num=num/10;
            if(digit%2!=0)
            {
                cnt++;
            }
        }
        return cnt;
    }
    public static int cnt3_7(int num)
    {
        int digit=0,cnt=0;
        while(num!=0)
        {
            digit=num%10;
            num=num/10;
            if(digit>3 && digit<7)
            {
                cnt++;
            }
        }
        return cnt;
    }
    public static int multdigi(int num)
    {
        int digit=0,mult=1;
        while(num!=0)
        {
            digit=num%10;
            num=num/10;
            mult=mult*digit;
            System.out.println(mult);
        }
        System.out.println(mult);
        return mult;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number : ");
        int n=sobj.nextInt();

        int iret1=0,iret2=0,iret3=0;
        iret1=cnteven(n);
        System.out.println("Count of even digits in number :"+iret1);
       
        iret2=cntodd(n);
        System.out.println("Count of odd digits in number :"+iret2);
       
        iret3=cnt3_7(n);
        System.out.println("Count of digits between 3 and 7 in number :"+iret3);

        iret3=multdigi(n);
        System.out.println("Multiplication of digits in number :"+iret3);

        System.out.println("Difference between even and odd digits is : "+(iret1-iret2));

    }
}