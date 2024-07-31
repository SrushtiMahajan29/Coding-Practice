package Marvellous;
public class Arithmetic {
    public int ivalue1;
    public int ivalue2;

    public Arithmetic(int a,int b)
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

