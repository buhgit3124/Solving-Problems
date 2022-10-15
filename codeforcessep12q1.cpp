#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int time1 = a - 1;
        int time2 = 0;

        if (c >= b)
        {
            time2 = 2 * c - b - 1;
        }
        else
        {
            time2 = b - 1;
        }
        if (time1 == time2)
        {
            cout << 3 << endl;
        }
        else if (time1 > time2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}