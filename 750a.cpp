#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,i;
    long long x;
    cin>>n>>k;
    t=240-k;
    for (i = n;i>0; i--)
    {
        if(i%2 ==0)
            x=i/2*(i+1)*5;
        else
            x=(i+1)/2*i*5;
        if(x<=t)
            break;
    }
    cout<<i;
    return 0;
}
