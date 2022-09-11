#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int p = (x * y) / __gcd(x, y);
        if ((y - x) == 1)
            cout << -1 << " " << -1 << endl;
        else if ((p >= x) && (p <= y))
            cout << x << " " << y<<endl;
        else
        {
            int z = ceil(x / 2.0);
            cout << 2 * z << " " << 3 * z << endl;
        }
    }
    return 0;
}
