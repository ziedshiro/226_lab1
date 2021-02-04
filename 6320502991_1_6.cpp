#include<iostream>
using namespace std;
int main()
{
    int n,m,y;
    long t;
    char x;
    cin>>n>>m>>t;
    cin>>x;
    y=t;
    if(x=='L')
    {

    }
    else if(x=='R')
    {
         do
    {
        if(y>0)
        {
            y-=m;
            if(y>0)
                y-=n;
            else
            {
                cout<<"R";break;
            }
        }
        else
        {
           cout<<"L";break;
        }

    }while(1);
    }

}
