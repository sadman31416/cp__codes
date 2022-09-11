#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    long long x,temp;
    cin>>n>>m;
    for (int i = 0;; i++)
    {
        if(n % 2 == 0)
            x=n/2*(n+1)*i;
        else
            x=n*(n+1)/2*i;
        if(x>=m)
            break;
        temp=x;
    }
    m-=temp;
    if(m == 0) cout<<0<<endl;
    for (int i = 1; i < n; i++)
    {
        m-=i;
        if(m<=0)
            {
                cout<<m+i<<endl;
                break;
            }
    }
    return 0;
}
