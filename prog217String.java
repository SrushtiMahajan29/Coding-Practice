// Take a sentence and a word and remove that word from that sentence
// Split at " "

import java.util.*;

class prog217String{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the sentence");
        String str=sobj.nextLine();

        System.out.println("Enter the he word that you want to search");
        String word=sobj.nextLine();
        
        word=word.trim();
        str = str.trim();

       str = str.replaceAll("\\s+"," ");
       str=str.replaceAll(word, "");

       str=str.trim();

       str=str.replaceAll("\\s+", " ");
        
        System.out.println("New string is: "+str);

    }
} 

