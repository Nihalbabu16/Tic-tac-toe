#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char a[3][3]={0};
    int w=0,flag=0,ff=10,fe=10,lm=0;
    int i,m,n,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]={95};
        }
    }

        lm=0;
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }

    do{
        do{
        cout<<"\n Enter the row number and column number where you want to mark \n";
        cin>>m>>n;
        if(m>2||n>2)
        {
            cout<<"\n Wrong input!!!. Input again. \n";
            lm=1;
        }
        }while(m>2||n>2);

        if(a[m][n]=='_')
        {
            cout<<"\n Enter your symbol(x,0)\n";
            cin>>a[m][n];

           do{
                if(a[m][n]=='x' && ff==20)
                {
                  cout<<"\n Enter correct symbol!!.Enter again \n";
                  cin>>a[m][n];
                }
           }while(a[m][n]== 'x' && ff==20);

            do
            {
                if(a[m][n]=='0' && fe==20)
                {
                    cout<<"\n Enter correct symbol!!.Enter again \n";
                    cin>>a[m][n];
                }

            }while((a[m][n]=='0' && fe==20));

        }
        else
        {
            cout<<"\n Wrong input!! ,enter another row and column \n";
            lm=1;
        }

        if(a[m][n]=='x')
        {
            ff=20;
            fe=10;
            if((a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x')||(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x')||(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x')||(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x')||(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x')||(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x')||(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x')||(a[0][2]=='x' && a[1][1]=='x' && a[2][0]=='x'))
                {
                cout<<"\n Player X wins the game \n";
                for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
                w=1;
                return 0;
                }
        }

         if(a[m][n]=='0')
        {
            fe=20;
            ff=10;
            if((a[0][0]=='0' && a[0][1]=='0' && a[0][2]=='0')||(a[1][0]=='0' && a[1][1]=='0' && a[1][2]=='0')||(a[2][0]=='0' && a[2][1]=='0' && a[2][2]=='0')||(a[0][0]=='0' && a[1][0]=='0' && a[2][0]=='0')||(a[0][1]=='0' && a[1][1]=='0' && a[2][1]=='0')||(a[0][2]=='0' && a[1][2]=='0' && a[2][2]=='#')||(a[0][0]=='0' && a[1][1]=='0' && a[2][2]=='0')||(a[0][2]=='0' && a[1][1]=='0' && a[2][0]=='0'))
               {
                cout<<"\n Player 0 wins the game \n";
                for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
               w=1;
               return 0;
               }
        }

        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]=='_')
                {
                    flag=1;
                }
        }
    }

       if(flag==0)
        {
        cout<<"\n Match Tied \n";
        w=1;
        }

        if(w==0 && flag==1 && lm==0)
            cout<<"\n Next player chance \n";
        flag=0;
    }while(w==0);

return 0;
}

