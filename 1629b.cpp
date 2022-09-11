#include<bits/stdc++.h>
using namespace std;
int arraygcd(int a,int p,int n)
{
    int r=p,i;
    for(i=1;i<n;i++)
    {
        r=__gcd(r,a);
        if(r==1)
            return 1;
    }
    return r;
}
int main()
{
    long long int t,l,r,k,p,n,x;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>k;
        while(k--)
        {
            if(l=r)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            else
                {
                    p=(l*(l+1));
                    n=(r-l)-2;
                    x=arraygcd(l+2,p,n);
                    if(x ==1)
                        {
                            cout<<"NO"<<endl;
                            break;
                        }
                }
                
            if(x>1)
                cout<<"YES"<<endl;
            x=0;
        }
    }
    return 0;
}
