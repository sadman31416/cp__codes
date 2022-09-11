#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
}
int main()
{
    long long int a,b;
    cin>>a>>b;
    if(a<b)
        {
            cout<<fact(a)<<endl;
        }
    else
        cout<<fact(b)<<endl;
    return 0;
}
