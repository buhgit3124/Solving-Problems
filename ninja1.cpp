#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, n, m,answer=0,left,kilo;
        cin >> a >> b >> n >> m;

        left = n;
        kilo=m+1;

        if (n >= kilo)
        {
            long long k = n / (kilo);
            answer += min(a * k * m, b * k * (kilo));
            left = n - k * (kilo);
        }

        answer += min(left * a, left * b);

        cout << answer << endl;
    }
}