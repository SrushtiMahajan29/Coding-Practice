//Accept size from user and

import java.util.*;

class Matrix{
    public void Display(int Arr[][])
    {
        int i=0,j=0;
        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j <Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

class prog150matrix{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,icol=0;

        System.out.println("Enter number of rows: ");
        iRow=sobj.nextInt();
        
        System.out.println("Enter number of columns: ");
        icol=sobj.nextInt();

        int Arr[][]=new int[iRow][icol];

        System.out.println("Enter numbers: ");

        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        //    1       2        3 
        for(i = 0; i < iRow; i++)   // Outer
        {   //     1        2     3   
            for(j = 0; j < icol; j++)   // Inner
            {
                Arr[i][j] = sobj.nextInt(); // 4
            }
        }
        Matrix mobj=new Matrix();
        mobj.Display(Arr);
    }
}