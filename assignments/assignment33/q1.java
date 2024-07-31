//accept n numbers from user and display difference between summation of even numbers and odd numbers
//accept n numbers from user and display numbers which are divisible by 5
//accept n numbers from user and display numbers which are divisible by 5 and even
//accept n numbers from user and display numbers which are divisible by 5 and 3

import java.util.*;

public class q1 {
    public static int diff(int Brr[])
    {
        int evenCount=0,oddcount=0;
        for(int i=0;i<Brr.length;i++)
        {
            if(Brr[i]%2==0)
            {
                evenCount=evenCount+Brr[i];
            }
            else
            {
                oddcount=oddcount+Brr[i];
            }
        }
        if(evenCount>oddcount)
        return evenCount-oddcount;
        else
        return oddcount-evenCount;
    }
    public static void divisible5(int Brr[])
    {

        for(int i=0;i<Brr.length;i++)
        {
            if(Brr[i]%5==0)
            {
                System.out.println(Brr[i]);
            }
        }
    }
    public static void even5div(int Brr[])
    {
        for(int i=0;i<Brr.length;i++)
        {
            if(Brr[i]%2==0 && Brr[i]%5==0)
            {
                System.out.println(Brr[i]);
            }
        }
    }
    public static void div3and5(int Brr[])
    {
        for(int i=0;i<Brr.length;i++)
        {
            if(Brr[i]%3==0 && Brr[i]%5==0)
            {
                System.out.println(Brr[i]);
            }
        }
    }
    public static void div11(int Brr[])
    {
        for(int i=0;i<Brr.length;i++)
        {
            if(Brr[i]%11==0)
            {
                System.out.println(Brr[i]);
            }
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int no=0,iret=0;
        System.out.println("Enter number of items");

        no=sobj.nextInt();
        int Arr[]=new int[no];

        System.out.println("Enter elements: ");
        for(int i=0;i<no;i++)
        {
            Arr[i]=sobj.nextInt();
        }

        iret=diff(Arr);
        System.out.println("Difference between even and odd numbers in given array is: "+iret);
        System.out.println("Numbers divisible by 5 are: ");
        divisible5(Arr);
        System.out.println("Even numbers divisible by 5  are: ");
        even5div(Arr);
        System.out.println("Numbers divisible by 11 are: ");
        div11(Arr);
    }
}
