#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,i;
    long long x, temp;
    cin >> n >> m;

    if (n % 2 == 0)
        x = n / 2 * (n + 1);
    else
        x = n * (n + 1) / 2;
    temp = m / x;
    m = m - x * temp;

    if (m == 0)
        cout << 0 << endl;
    else
    {

        for ( i = 1; i < n; i++)
        {
            m -= i;
            if (m < i+1)
            {
                cout<<m<<endl;
                break;
            }
    
        }
    }
    return 0;
}
