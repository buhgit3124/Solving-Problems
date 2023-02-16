#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll samples;
    cin >> samples;
    while (samples--)
    {
        ll n, k;
        cin >> n >> k;

        ll l[n], r[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }

        ll count1 = 0, count2 = 0, count3 = 0;
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            if (k >= l[i] && k <= r[i])
            {

                if (k > 1 && (k >= l[i] + 1 && k <= r[i] + 1))
                {
                    count1++;
                }
                if (k + 1 >= l[i] && k + 1 <= r[i])
                {
                    count3++;
                }
                count2++;
            }
        }
        if (count2 > count1 && count2 > count3)
        {
            flag = true;
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
