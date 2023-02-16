#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        ll n, m,count=0;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        bool flag = true;

        reverse(b.begin(), b.end());
        a += b;
        // cout<<a<<endl;
        for (ll i = 0; i < a.length() - 2; i++)
        {
            if (a[i] == a[i + 1] && a[i] == a[i + 2])
            {
                //cout << "NO" << endl;
                flag = false;
                break;
            }
            
        }
        for (ll i = 0; i < a.length()-1; i++)
        {
            if(a[i]==a[i+1]){
                count++;
            }
        }
        if(count>1){
            flag=false;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}