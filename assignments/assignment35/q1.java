//Accept n numbers and accept one more number and check if that another is present or not
//Accept n numbers and accept one more number and return first occurance of another number
//Accept n numbers and accept one more number and return index of last occurance of that number
//Accept n numbers and accept range and display all elments from that range
//Accept n numbers and return product of all odd elements from that range

import java.util.*;

public class q1{
    public static boolean check(int arr[], int num)
    {
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==num)
            {
                return true;
            }
        }
        return false;
    }
    public static int first_occ(int arr[], int num)
    {
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==num)
            {
                return i+1;
            }
        }
        return (-1);
    }
    public static int last_occ(int arr[], int num)
    {
        for(int i=arr.length-1;i>=0;i--)
        {
            if(arr[i]==num)
            {
                return i+1;
            }
        }
        return (-1);
    }
    public static void range_occ(int arr[], int num1,int num2)
    {
        System.out.println("Numbers in the range of: "+num1+" to "+num2+" are : ");
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<num2 && arr[i]>num1)
            {
                System.out.println(arr[i]);
            }
        }
    }
    public static int range_occ(int arr[])
    {
        int mult=1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]%2!=0)
            {
                mult=mult*arr[i];
            }
        }
        return mult;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int num=0;
        System.out.print("Enter number of elemets: ");
        num=sobj.nextInt();

        int arr[]=new int[num];
        for(int i=0;i<num;i++)
        {
            System.out.println("Enter "+(i+1)+" element: ");
            arr[i]=sobj.nextInt();
        }
        System.out.println("Enter another number: ");
        num=sobj.nextInt();

        int iret1=0;
        boolean bret=false;

        bret=check(arr,num);
        if(bret==true)
        System.out.println(num+" is present in given array");
        else
        System.out.println(num+" is not presesnt");

        iret1=first_occ(arr, num);
        System.out.println("First occurance of num is "+iret1);
    
        iret1=last_occ(arr, num);
        System.out.println("Last occurance of num is "+iret1);

        System.out.println("Enter range : ");
        int num1,num2;
        System.out.println("Enter first number in range: ");
        num1=sobj.nextInt();
        System.out.println("Enter second number in range: ");
        num2=sobj.nextInt();
        range_occ(arr, num1, num2);

        iret1=range_occ(arr);
        System.out.println("Product of odd number in given elements is "+iret1);
    }
}

