#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, l;
    cin >> k >> n;

    for (int i = 1;; i++)
    {
        if (k * i % 10 == 0 || k * i % 10 == n)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
