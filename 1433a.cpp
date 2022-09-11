#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,temp,i;
    char s[10000];
    cin>>t;
    while(t--)
    {
        cin>>x;

        for (i = 1; i <10; i++)
        {
            if(x%10==i)
            break;
        }
        sprintf(s,"%d",x);
        x=strlen(s);
        if(x%2==0)
        {
            x=x/2*(x+1);
        }
        else
        {
            x=(x+1)/2*x;
        }
        cout<<(i-1)*10+x<<endl;  
    }
    return 0;
}
