// Display words in a sentence along with its length
// Trim extra whitespaces
// Split at " "
// Logic : count==space+1


import java.util.*;

class prog213String{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the sentence");
        String str=sobj.nextLine();

        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");

        int iCnt=0;int max=0;
        for (iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println("Word is: "+Arr[iCnt]+"  its length is : "+Arr[iCnt].length());
        }

    }
} 

