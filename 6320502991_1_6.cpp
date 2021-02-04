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
