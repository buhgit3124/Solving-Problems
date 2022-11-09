#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl
                 << 1 << " " << 2 << endl;
        }
        else if (n % 2 == 0)
        {
            cout << n / 2 << endl;

            for (int i = 0; 6 + (i * 6)< 3 * n; i++)
            {
                cout << 2 + (i * 6) << " " << 6 + (i * 6) << endl;
            }
        }

        else
        {
            cout << (n / 2) + 1 << endl;
            for (int i = 0; 6 + (i * 6) < 3 * n; i++)
            {
                cout << 2 + (i * 6) << " " << 6 + (i * 6) << endl;
            }
            cout << 3 * n << " " << 3 * n - 2 << endl;
        }
    }

    return 0;
}