// Reverse words in sentence// Split at " "

import java.util.*;

class prog219String{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the sentence");
        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");

        StringBuffer output=new StringBuffer();

        StringBuffer word=null;

        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            word=new StringBuffer(Arr[iCnt]);
            output.append(word.reverse()).append(" ");
        }

        System.out.println("Updated string is "+output);
    }
} 

