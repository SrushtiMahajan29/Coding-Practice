class node{
    public int Rno;
    public String Name;
    public String City;
    public int Marks;
// 3:40
    public node next;

    public node(int A, String B,String C,int D)
    {
        Rno=A;
        Name=B;
        City=C;
        Marks=D;
        next=null;
    }
}

class DBMS{
    private node first;

    public DBMS()
    {
        first=null;
    }

    //insertLast che logic
    public void InsertIntoTable(int Rno,String Name,String City,int Marks)
    {
        node newn=new node(Rno ,Name, City, Marks);
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
        System.out.println("One record gets inserted successfully");
    }

    //Display
    public void SelectStarFrom()
    {
        System.out.println("Data from student tavle");

        node temp=first;

        System.out.println("_______________________________________________________________");
        while(temp!=null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.Marks+"\t"+temp.City);
            temp=temp.next;

        }
        System.out.println("_________________________________________________________________");
    }
}

public class prog175 {
   public static void main(String arg[])
   {
    DBMS obj = new DBMS();

    obj.InsertIntoTable(1,"Amit","Pune",89);
    obj.InsertIntoTable(2,"Pooja","Mumbai",95);
    obj.InsertIntoTable(3,"Rahul","Satara",80);
    obj.InsertIntoTable(4,"Neha","Pune",78);
    
    obj.SelectStarFrom();
   }
}
