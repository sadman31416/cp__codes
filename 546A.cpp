#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    w=w*(w+1)/2;
    w=w*k-n;
    cout<<max(w,0)<<endl;
    return 0;
}
