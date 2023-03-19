#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll samples;
    cin >> samples;
    while (samples--)
    {
        ll arr[4];
        ll input;
        vector<pair<int, int>> pos;

        for (ll i = 0; i < 4; i++)
        {
            cin >> input;
            pos.push_back(make_pair(input,i));
        }
        sort(pos.begin(),pos.end());
        if(pos[0].second+pos[3].second==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}