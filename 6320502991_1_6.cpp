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
      do
    {
        if(y>0)
        {
            y-=n;
            if(y>0)
                y-=m;
            else
            {
                cout<<"L";break;
            }
        }
        else
        {
           cout<<"R";break;
        }

    }while(1);
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
