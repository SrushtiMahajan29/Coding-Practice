// Count number of words in a sentence
// Trim extra whitespaces
// Logic : count==space+1


import java.util.*;

class prog210String{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the sentence");
        String str=sobj.nextLine();

        str=str.trim();

        char Arr[]=str.toCharArray();

        int i=0;
        int spaceCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]==' ')
            {
                spaceCnt++;
            }
        }
        System.out.println("Number of words in given sentence are : "+(spaceCnt+1));
    }
} 

