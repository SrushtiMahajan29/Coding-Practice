//Accept size from user and

import java.util.*;

class Matrix{
    public int Arr[][];//cpp->pointer ,here ->java

    public Matrix(int A,int B)
    {
        Arr=new int[A][B];
    }

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        int i=0,j=0;

        System.out.println("Enter the elements : ");

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
    }

    public void Display()//Parameter chi garaj nahi same class 
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
    public int summation()
    {
        int sum=0,i=0,j=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                sum=sum+Arr[i][j];
            }
        }
        return sum;

    }
}

class prog153matrix{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,icol=0;

        System.out.println("Enter number of rows: ");
        iRow=sobj.nextInt();
        
        System.out.println("Enter number of columns: ");
        icol=sobj.nextInt();

       
        Matrix mobj=new Matrix(iRow,icol);
        mobj.Accept();
        mobj.Display();
        int sum=0;
        sum=mobj.summation();
        System.out.println("summation is: "+sum);
    }
}