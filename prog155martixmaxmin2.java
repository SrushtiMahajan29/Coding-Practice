
import java.util.*;

interface calculation{
    public int Maximum();
    public int Minimum();
}

class Matrix    //parent class
{
    protected int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    protected void finalize()//destructor sarkha kam karato
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

class MyMatrix extends Matrix implements calculation//child class
//Interface jar implement karat asal tar all functions of interface must be defined here
{
    public MyMatrix(int A, int B)
    {
        super(A,B);         //Providing to parent class
    }

    public int Maximum()
    {
        int i = 0, j = 0, iMax = Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j]>iMax)
                {
                    iMax=Arr[i][j];
                }
            } 
        }
        return iMax;
    }
    public int Minimum()
    {
        int i = 0, j = 0, iMin = Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j]<iMin)
                {
                    iMin=Arr[i][j];
                }
            }
        }
        return iMin;
    }
}

class prog155martixmaxmin2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        iRet = mobj.Maximum();

        System.out.println("Maximum of all elements is : "+iRet);
        
        iRet = mobj.Minimum();

        System.out.println("Minimum of all elements is : "+iRet);

        mobj = null;//closing object--object cha vaper sampla
        System.gc();//garbage collector--waiter
    }
}