#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cin>>n;
    if((floor(n)>=0&&floor(n)<=24)&&((n-floor(n))*100>=0&&(n-floor(n))*100<=59))
    {
      if(n>=0&&n<=11)
    {
        cout<<floor(n)<<":"<<(n-floor(n))*100;
        if((n-floor(n))*100==0)
            cout<<"0";
        cout<<" a.m.";
    }
    else if(n>=12&&n<13)
    {
        cout<<floor(n)<<":"<<(n-floor(n))*100;
        if((n-floor(n))*100==0)
            cout<<"0";
        cout<<" noon";
    }
    else if(n>=13&&n<=23)
    {
        if(n>=13)
        {
            cout<<floor(n)-12<<":"<<(n-floor(n))*100;
        }
        if((n-floor(n))*100==0)
        {
            cout<<"0";
        cout<<" p.m.";
        }
    }
    else if(n>=24&&n<25)
    {
        if(n==24)
           cout<<floor(n)-12<<":"<<(n-floor(n))*100;
        if((n-floor(n))*100==0)
        {
            cout<<"0";
        cout<<" midnight";
        }
    }
    }
}
