#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll samples;
    cin >> samples;
    while (samples--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll count = 0;
        vector<int> vec;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
            {
                count++;
                vec.push_back(i);
            }
        }
        if (count < 2 && count != 0)
        {
            cout << -1 << endl;
        }
        else if (count == 0)
        {
            cout << 1 << endl;
        }
        else if (count % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll size;
            size = vec.size();
            // cout<<size<<endl;
            cout << vec[(size / 2)-1]+1 << endl;
            // for (int i = 0; i < vec.size(); i++)
            // {
            //     cout << vec[i] << " ";
            // }
            // cout << endl;
        }
    }
}