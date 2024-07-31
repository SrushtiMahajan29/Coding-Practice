class node
{
    private static int Counter = 1;
    public int Rno;
    public String Name;
    public String City;
    public int Marks;
// 3:40
    public node next;

    public node( String B,String C,int D)
    {
        Rno=Counter;
        Counter++;

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
    public void InsertIntoTable(String Name,String City,int Marks)
    {
        node newn=new node(Name, City, Marks);
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

      // select * from student where city = '_____';
    public void SelectStarFromWhereCity(String str)
    {
        System.out.println("Data from student table whrere city is "+str);

        node temp=first;

        System.out.println("_______________________________________________________________");
        while(temp!=null)
        {
            if(str.equals(temp.City)){//case sensetive
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.Marks+"\t"+temp.City);
            
            }
            temp=temp.next;
        }
        System.out.println("_________________________________________________________________");
    }

    //select Count(Marks) from student;
    public void SelectCount()
    {
        node temp = first;
        int iCnt = 0;

        while(temp != null)
        {
            temp = temp.next;
            iCnt++;
        }

        System.out.println("Number of records in the table : "+iCnt);
    }

    //select Sum(MArks) from student
    public void SelectSum()
    {
        node temp=first;
        int isum=0;

        while (temp!=null) {
                isum=isum+temp.Marks;
                temp=temp.next;
        }
        System.out.println("Sum of marks of students is "+isum);
    }
   
    public void SelectAvg()
    {
        node temp=first;
        int isum=0;
        int icnt=0;

        while (temp!=null) {
                isum=isum+temp.Marks;
                temp=temp.next;
                icnt++;
        }
        System.out.println("Sum of marks of students is "+(float)((float)isum/(float)icnt));
    }

    public void SelectMax()
    {
        node temp=first;
        int imax=0;

        if(temp!=null)
        {
            imax=temp.Marks;
        }
        while(temp!=null)
        {
            if(temp.Marks>imax)
            {
                imax=temp.Marks;
            }
            temp=temp.next;
        }
        System.out.println("Maximum marks : "+imax);
    }

    public void SelectMin()
    {
        node temp=first;
        int imin=0;

        if(temp!=null)
        {
            imin=temp.Marks;
        }
        while(temp!=null)
        {
            if(temp.Marks<imin)
            {
                imin=temp.Marks;
            }
            temp=temp.next;
        }
        System.out.println("Minimum marks : "+imin);
    }

     //select * from student where name = "_____";
     public void SelectStarFromName(String str)
     {
         node temp = first;
 
         System.out.println("Information of all students with the name : "+str);
 
         while(temp != null)
         {
             if(str.equals(temp.Name))
             {
                 System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);        
             }
             temp = temp.next;
         }
     }

    //update student set City = "____" where Rno = ____;
     public void UpdateCity(int no,String str)
    {
        node temp = first;
 
        while(temp != null)
        {
            if(temp.Rno==no)
            {
                temp.City=str;
                break;    
            }
            temp = temp.next;
        }

        System.out.println("records gets updated");
    }

//11 : delete from student where Rno = ___;
    public void DeleteFrom(int no)
    {
        node temp = first;

        // If LL is empty
        if(first==null)
        {
            return;
        }

        // if first node is the targated node
        if(temp.Rno==no)
        {
            first=first.next;
            return;
        }
        while(temp.next!=null)
        {
            if(temp.next.Rno==no)
            {
                temp.next=temp.next.next;
                break;
            }
            temp=temp.next;
        }
    }
}

// 2:30

public class prog176 {
   public static void main(String arg[])
   {
    DBMS obj = new DBMS();

    obj.InsertIntoTable("Amit","Pune",89);
    obj.InsertIntoTable("Pooja","Mumbai",95);
    obj.InsertIntoTable("Rahul","Satara",80);
    obj.InsertIntoTable("Neha","Pune",78);
    obj.InsertIntoTable("Gauri","Pune",90);
    
    obj.SelectStarFrom();
   
    obj.SelectStarFromWhereCity("Pune");

    obj.SelectCount();

    obj.SelectSum();

    obj.SelectAvg();//54

    obj.SelectMax();

    obj.SelectMin();

    obj.SelectStarFromName("Amit");

    obj.UpdateCity(3,"Nashik");

    obj.SelectStarFrom();

    obj.DeleteFrom(5);

    obj.SelectStarFrom();
   
    obj.InsertIntoTable("Rukmini","Kolhapur",77);

    obj.SelectStarFrom();
}
}

/*
Supported Queries

1 : insert into student values('Amit','Pune',78);
2 : select * from student;
3 : slect *  from student where City = 'Pune';
4 : select Count(Marks) from student;
5 : select sum(Marks) 
6 : select Avg(Marks) from student;
7 : select Max(Marks) from student;
8 : select Min(Marks) from student;
9 : select * from student where name = "_____";
10 : update student set City = "____" where Rno = ____;
11 : delete from student where Rno = ___;

*/