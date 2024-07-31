import java.util.*;
public class prog79evenoddfact {
    public static void factSum(int iNo)
    {
        int evenFact=0,oddFact=0;
        for(int i=1;i<=iNo;i++)
        {
            if(iNo%i==0)
            {
                if(i%2==0)
                {
                    System.out.println("Even Fact"+i);
                    evenFact=evenFact+i;
                }
                else{
                    System.out.println("Odd Fact"+i);
                    oddFact=oddFact+i;
                }
            }
        }
        System.out.println("Even factor sum of "+iNo+" is "+evenFact);
        System.out.println("Odd factor sum of "+iNo+" is "+oddFact);
        
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iValue=0,iret=0;
        System.out.println("Enter number");
        iValue=sobj.nextInt();

        factSum(iValue);
    }
}
