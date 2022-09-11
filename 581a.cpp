#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;

int main()
{
    ll a,b,k,m;
    cin>>a>>b;
    m=min(a,b);
    k=abs(a-b)/2;
    cout<<m<<" "<<k<<endl;
    
    return 0;
}
