// ip:5
// op: *
//     **
//     ***
//     ****
//     *****


import java.util.*;
public class prog82 {
    public static void display(int Brr[])
    {
        int iSize=Brr.length;//length prop so no()
        System.out.println("Elements of array are");
        for(int i=0;i<iSize;i++)
        {
            System.out.println(Brr[i]);       
        } 
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iSize=0;

        System.out.println("Enter number of elements");
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter elements");
        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sobj.nextInt();
        }

        display(Arr);
    }
}