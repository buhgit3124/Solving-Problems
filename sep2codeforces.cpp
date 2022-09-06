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
        cout << (n) + (n / 2) * 2 + (n / 3) * 2 << endl;
    }

    return 0;
}