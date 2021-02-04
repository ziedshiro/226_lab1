#include<iostream>
using namespace std;
int main()
{
    int N,i,k=0;
    cin>>N;
    int n[N],max_=0;
    for(i=0;i<N;i++)
        cin>>n[i];
    max_=n[0];
    for(i=0;i<N;i++)
    {
        if(max_<n[i])
        {
            max_=n[i];
            k=i;
        }
    }
    cout<<k+1<<" "<<max_;
}
