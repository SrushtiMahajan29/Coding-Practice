#include<iostream>
using namespace std;
class pattern{
    public:
        int row;
        int col;
        pattern()
        {
            row=0;
            col=0;
        }
        void fun1()
        {
            /*1 2 3 4
              5 6 7 8 
              9 1 2 3 
              4 5 6 7 */
            int cnt=1;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++,cnt++)
                {
                    if(cnt<=9)
                    cout<<cnt<<"\t";
                    else
                    {
                        cnt=1;
                        cout<<cnt<<"\t";
                    }
                }
                cout<<"\n";
            }
        }
        void fun2()
        {
            /*2 4 6 8 10
              1 3 5 7 9 
              2 4 6 8 10
              1 3 5 7 9
              */
            
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(i%2==0)
                    {
                        cout<<j+j-1<<"\t";
                    }
                    else{
                        cout<<j+j<<"\t";
                    }
                }
                cout<<"\n";
            }
        }
        void fun3()
        {
            /*a b c d e 
              1 2 3 4 5
              a b c d e 
              1 2 3 4 5
              a b c d e */
            for(int i=1;i<=row;i++)
            {
                char A=97;
                
                for(int j=1;j<=col;j++,A++)
                {
                    if(i%2==0)
                    {
                        cout<<j<<"\t";
                    }
                    else{
                        cout<<A<<"\t";
                    }
                }
                cout<<"\n";
            } 
        }
        void fun4()
        {
            /*
            1   2   3   4   5
            -1  -2  -3  -4  -5
            1   2   3   4   5
            -1  -2  -3  -4  -5 */

            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(i%2==0)
                    {
                        cout<<-j<<"\t";
                    }
                    else{
                        cout<<j<<"\t";
                    }
                }
                cout<<"\n";
            }  
        }
        void fun5()
        {
            /*
            1 2 3 4 5
            2 3 4 5 6
            3 4 5 6 7 
            4 5 6 7 8
            */
            for(int i=1;i<=row;i++)
            {
                int c=i;
                for(int j=1;j<=col;j++,c++)
                {
                    cout<<c<<"\t";
                }
                cout<<"\n";
            }
        }
};
int main()
{
    int r,c;
    cout<<"Enter row numbers";
    cin>>r;
    cout<<"Enter column numbers";
    cin>>c;
    pattern obj1;
    obj1.row=r;
    obj1.col=c;
    cout<<"First pattern: \n";
    obj1.fun1();
    cout<<"Second pattern: \n";
    obj1.fun2();
    cout<<"Third pattern: \n";
    obj1.fun3();
    cout<<"Fourth pattern\n";
    obj1.fun4();
    cout<<"Fifth pattern\n";
    obj1.fun5();

    return 0;
}