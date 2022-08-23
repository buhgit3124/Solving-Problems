#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin>>n;
        for (int i = n; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << endl;

    }

    return 0;
}