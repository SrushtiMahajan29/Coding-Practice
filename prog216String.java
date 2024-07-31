// Display frequency of a word accpted from user
// Split at " "

import java.util.*;

class prog216String{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the sentence");
        String str=sobj.nextLine();

        System.out.println("Enter the he word that you want to search");
        String word=sobj.nextLine();
        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");

        int iCnt=0;int frequency=0;
       
        for (iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt].equals(word))
            {
                frequency++;
            }
        }
        System.out.println("Maximum frequency of word"+word+" is "+frequency);

    }
} 

