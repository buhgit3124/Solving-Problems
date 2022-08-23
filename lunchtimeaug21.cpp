#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n, m;
        cin >> n >> m;
        int possible = n / m;
        int rem = n % m;
        if (possible % 2 == 0 && rem == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}