class node{
    public int data;
    public node next;
    
    public node(int no)
    {
        data = no;
        next = null;
    }
}
class SinglyLL
{
    private node first;//Member holding address of first member of linked list
    private int Count;

    SinglyLL()
    {
        first=null;
        Count=0;
    }

    public void InsertFirst(int no){}
    public void InsertLast(int no){}
    public void InsertAtPos(int no,int ipos){}
    public void DeleteFirst(){}
    public void DeleteLast(){}
    public void DeleteAtPos(int ipos){}
    public void Display(){}
    public int Count(){return Count;}

}
public class prog173 {
    public static void main(String arg[])
    {
        SinglyLL obj = new SinglyLL();      
        
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
    }
}
