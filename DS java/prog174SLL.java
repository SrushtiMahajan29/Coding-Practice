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

    public void InsertFirst(int no)
    {
        node newn=new node(no);

        if(first==null)//empty
        {
            first=newn;
        }
        else{
            newn.next=first;
            first=newn;
        }
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn=new node(no);
        
        if(first==null)
        {
            first=newn;
        }
        else{
            node temp=first;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newn;
        }
         Count++;
    }
    
    public void DeleteFirst()
    {
        if(first==null)
        {
            System.out.println("Empty LL");
            return;
        }
        else if(first.next==null)//Single node
        {
            first=null;
        }
        else
        {
            first=first.next;
        }
        Count--;
    }
    public void DeleteLast()
    {
        if(first==null)
        {
            System.out.println("Empty LL");
            return;
        }
        else if(first.next==null)//Single node
        {
            first=null;
        }
        else
        {
            node temp=first;
            while(temp.next.next!=null)
            {
                temp=temp.next;
            }
            temp.next=null;
        }
        Count--;
    }
    public void Display()
    {
        node temp=first;

        System.out.println("Elements of ll: ");

        while(temp!=null)
        {
            System.out.print("|"+temp.data+"| ->");
            temp=temp.next;
        }
        System.out.print("null\n");

    }

    public int Count()
    {
        return Count;
    }

    public void InsertAtPos(int no,int ipos)
    {

        if(ipos<1 || ipos> (Count+1))
        {
            System.out.println("Invalid position");
            return;
        }
        else if(ipos==1)
        {
            InsertFirst(no);
        }
        else if(ipos==Count+1)
        {
            InsertLast(no);
        } 
        else
        {
            node newn=new node(no);
            node temp=first;

            for(int i=1;i<ipos-1;i++)
            {
                temp=temp.next;
            }
            newn.next=temp.next;
            temp.next=newn;
            Count ++;
        }
    }
    
    public void DeleteAtPos(int ipos)
    {
        if(ipos<1 || ipos> (Count+1))
        {
            System.out.println("Invalid position");
            return;
        }
        else if(ipos==1)
        {
            DeleteFirst();
        }
        else if(ipos==Count)
        {
            DeleteLast();
        }
        else
        {
            node temp=first;
            for(int i=1;i<ipos+1;i++)
            {
                temp=temp.next;
            }
            temp.next=temp.next.next;
            Count--;
        }
    }

}

public class prog174SLL {
    public static void main(String arg[])
    {
        int iRet=0;
        SinglyLL obj = new SinglyLL();      
        
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        
        obj.InsertLast(151);
        obj.InsertLast(121);
        obj.InsertLast(111);

        obj.Display();

        
        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.InsertAtPos(105,5);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteAtPos(5);
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteFirst();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteLast();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);
    }
}
