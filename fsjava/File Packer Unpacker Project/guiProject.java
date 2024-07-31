import javax.swing.*;

import java.awt.Frame;
import java.awt.event.*;
import java.util.*;
import java.io.*;


class GUI extends WindowAdapter implements ActionListener{
    public GUI(int width,int height,String title)
    {
        Frame fobj=new Frame(title);
        fobj.setSize(width,height);
        fobj.setVisible(true);
    }
}

public class guiProject {
    public static void main(String arg[]) throws IOException
    {
        Scanner sobj=new Scanner(System.in);

        GUI gobj=new GUI(400,400,"Packer Unpacker");

        System.out.println("Menu");
        System.out.println("1. Packing of files");
        System.out.println("2. Unpacking of files");
        System.out.println("Enter your choice : ");

        int choice=sobj.nextInt();

        activity aobj=new activity();

        if(choice==1)
        {
            aobj.packing();
        }
        else if(choice==2)
        {
            aobj.unpacking();
        }
        else
        {
            System.out.println("Entered wrong choice");
        }
    }

}
