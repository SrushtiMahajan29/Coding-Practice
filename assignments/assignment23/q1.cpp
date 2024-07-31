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
            
             * * * # 
             * * # *
             * # * *
             # * * *                
            
             */
            
            int cnt=col;
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(j==row-i+1)
                    {
                        cout<<"#"<<"\t";
                        cnt--;
                    }
                    else
                    {
                        cout<<"*\t";
                    }
                }
                cout<<"\n";
            }
        }
        void fun2()
        {
            /*
            
             * * * #
             * * # @
             * # @ @ 
             # @ @ @              
            
             */
             int cnt=col;
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(j<row-i+1)
                    {
                        cout<<"*"<<"\t";
                    }
                    else if(j==row-i+1)
                    {
                        cout<<"#"<<"\t";
                        cnt--;
                    }
                    else{
                        cout<<"@"<<"\t";
                        cnt--;
                    }
                }
                cout<<"\n";
            }
        }
        void fun3()
        {
            /*
            
             * * * * * *
             *       * *
             *     *   * 
             *   *     * 
             * *       *
             * * * * * *                
            
             */
             int cnt=col;
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(j==row-i+1 )
                    {
                        cout<<"*"<<"\t";
                    }
                    else if( i==1 ||i==row ||j==1 || j==col)
                    {
                        cout<<"*\t";
                    }
                    else{
                        cout<<" "<<"\t";
                    }
                }
                cout<<"\n";
            } 
        }
        void fun4()
        {
           /*
            
             * * * * * *
             * # # # * *
             * # # * $ *
             * # * $ $ *
             * * $ $ $ *   
             * * * * * *              
            
             */
            cout<<col<<"\n";
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(j==row-i+1||i==1 || j==1||i==row||j==col )
                    {
                        cout<<"*"<<"\t";
                    }
                    
                    else if(j<row-i+1 && j>1)
                    {
                        cout<<"#"<<"\t";
                    }
                    
                    else{
                        cout<<"$\t";
                    }
                    
                }
                cout<<"\n";
            }  
        }
        void fun5()
        {
            /*
            1 2 3 4 5
            1 2     5
            1   3   5
            1     4 5
            1 2 3 4 5            */
            
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(i==1||i==row)
                    {
                        cout<<j<<"\t";
                    }
                    else if(i==j){
                        cout<<i<<"\t";
                    }
                    else if(j==1|| j==col)
                    {
                        cout<<j<<"\t";
                    }
                    else{
                        cout<<" \t";
                    }
                }
                cout<<"\n";
            } 
        }
        void fun6()
        {
            /*
            1 2 3 4 5
            1 2     5
            1   3   5
            1     4 5
            1 2 3 4 5            */
            
            for(int i=1;i<=row;i++)
            {
                for(int j=1;j<=col;j++)
                {
                    if(i==1 ||j==1 || i==row ||j==col ||i==j){
                        cout<<j<<"\t";
                    }
                    else cout<<" "<<"\t";
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
    obj1.fun6();

    return 0;
}