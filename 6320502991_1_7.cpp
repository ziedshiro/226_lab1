#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cin>>n;
    if((floor(n)>=0&&floor(n)<=23)&&((n-floor(n))*100>=0&&(n-floor(n))*100<=59))
    {
      if(n>=0&&n<=11.59)
    {
        cout<<floor(n)<<":"<<(n-floor(n))*100;
        if((n-floor(n))*100==0)
            cout<<"0";
        cout<<" a.m.";
    }

    else if(n>=12&&n<=23.59)
    {
        cout<<floor(n)<<":"<<(n-floor(n))*100;
        if((n-floor(n))*100==0)
            cout<<"0";
        cout<<" p.m.";
    }
    else
        cout<<"Error";
    }
    else
        cout<<"Error";

}
