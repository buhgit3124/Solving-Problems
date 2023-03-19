#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll samples;
    cin >> samples;
    while (samples--)
    {
        ll n, m;
        cin >> n >> m;

        ll arr[n + m], sum = 0;
        for (ll i = 0; i < n + m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n + m - 1);
        reverse(arr, arr + m + n);
        for (ll i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        cout << sum << endl;
    }
}