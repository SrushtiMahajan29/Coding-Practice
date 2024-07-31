// Display fre of each word using hashmap

import java.util.*;

class prog226Set
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
        str = str.replaceAll("\\s","");

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();
        int iCnt = 0,Frequency=0;
                //key:char,value:int
        HashMap<Character,Integer> hobj=new HashMap<>();

        for(char ch: Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency=hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else{
                hobj.put(ch,1);
            }
        }

        
        Set<Character> setobj = hobj.keySet();
        System.out.println(setobj);
    }
}