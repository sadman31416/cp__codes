#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,k=0;
    switch (a)
    {
    case 1:
        k=a;
    case 2:
        k=a+1;
    case 3:
        k=a+2;
        break;
    case 4:
        k=a+3;
    }
    cout<<k;
    return 0;
}
