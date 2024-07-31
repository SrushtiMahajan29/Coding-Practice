// Display max length of a word and that word
// Trim extra whitespaces
// Split at " "
// Logic : count==space+1


import java.util.*;

class prog214String{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the sentence");
        String str=sobj.nextLine();

        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");

        int iCnt=0;int max=0;
        String maxstr="";
        for (iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr[iCnt].length()>max)
            {
                max=Arr[iCnt].length();
                maxstr=Arr[iCnt];
            }
        }
        System.out.println("Maximum length of word is : "+max+ " is of "+ maxstr);

    }
} 

