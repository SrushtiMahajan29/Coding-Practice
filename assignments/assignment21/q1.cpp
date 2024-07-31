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
            /*
            
             * # # #
             * * # #
             * * * #
             * * * *                
            
             */
            
            int cnt=1;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++,cnt++)
                {
                    if(j>i)
                    cout<<"#"<<"\t";
                    else
                    {
                        cout<<"*"<<"\t";
                    }
                }
                cout<<"\n";
            }
        }
        void fun2()
        {
            /*
            
             * * * *
             * * * #
             * * # #
             * # # #                
            
             */
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(i>j)
                    {
                        cout<<"#"<<"\t";
                    }
                    else{
                        cout<<"*"<<"\t";
                    }
                }
                cout<<"\n";
            }
        }
        void fun3()
        {
            /*
            
             $ * * *
             * $ * *
             * * $ *
             * * * $                
            
             */
            for(int i=1;i<=row;i++)
            {
                char A=97;
                for(int j=1;j<=col;j++,A++)
                {
                    if(i==j)
                    {
                        cout<<"$"<<"\t";
                    }
                    else{
                        cout<<"*"<<"\t";
                    }
                }
                cout<<"\n";
            } 
        }
        void fun4()
        {
           /*
            
             * * * *
             * @ @ *
             * @ @ *
             * * * *                
            
             */

            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(i==1 || j==1 ||i==row || j==col)
                    {
                        cout<<"*"<<"\t";
                    }
                    else{
                        cout<<"@"<<"\t";
                    }
                }
                cout<<"\n";
            }  
        }
        void fun5()
        {
            /*
            1 2 3 4 
            1 * * 4 
            1 * * 4  
            1 2 3 4
            */
            
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(i==1 || j==1 ||i==row || j==col)
                    {
                        cout<<j<<"\t";
                    }
                    else{
                        cout<<"*"<<"\t";
                    }
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