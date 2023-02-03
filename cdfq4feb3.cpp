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
        string s;
        cin >> s;
        int a[n];
        int b[n];
        int disfirst = 0, dislast = 0;
        map<int, int> map1;
        map<int, int> map2;

        for (int i = 0; i < n; i++)
        {
            if (map1[s[i]] == 0)
            {
                disfirst++;
            }
            a[i] = disfirst;
            map1[s[i]]++;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (map2[s[i]] == 0)
            {
                dislast++;
            }
            b[i] = dislast;
            map2[s[i]]++;
        }

        int maximum = INT_MIN;

        for (int i = 0; i < n - 1; i++)
        {
            maximum = max(maximum, a[i] + b[i + 1]);
        }
        cout << maximum << endl;
    }
}