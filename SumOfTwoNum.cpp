#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin >> n;
        ll div = n / 2;
        ll rem = n % 2;
        ll cnt = 0;
        if (rem != 0)
        {
            if (n % 10 == 9)
            {
                ll second = 0;
                cnt = floor(log10(n));
                while (cnt--)
                {
                    second+=5*pow(10,cnt);
                }
                cout << n-second << " " << second << endl;
            }
            else
            {
                cout << (n+1)/2 << " " << (n-1)/2 << endl;
            }
        }
        else
        {
            cout << div << " " << div << endl;
        }
    }
}