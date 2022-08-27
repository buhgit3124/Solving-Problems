#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n, m, x, y, d;

        cin >> n >> m >> x >> y >> d;

        if (x - d <= 1 && x + d >= n)
        {
            cout << "-1" << endl;
        }
        else if (y - d <= 1 && y + d >= m)
        {
            cout << "-1" << endl;
        }
        else if ((x - d <= 1 && y - d <= 1) || (x + d >= n && y + d >= m))
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << (n + m - 2) << endl;
        }
    }

    return 0;
}