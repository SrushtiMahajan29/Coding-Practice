// Display words in a sentence
// Trim extra whitespaces
// Split at " "
// Logic : count==space+1


import java.util.*;

class prog212String{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the sentence");
        String str=sobj.nextLine();

        
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");

        for(String s: Arr)
        {
            System.out.println(s);
        }

    }
} 

