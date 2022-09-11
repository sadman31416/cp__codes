#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=0,count=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(temp<a[i])
        temp=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        count +=temp-a[i];
    }
    cout<<count<<endl;
    
    
    return 0;
}
