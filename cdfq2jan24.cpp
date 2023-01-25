#include <bits/stdc++.h>
using namespace std;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int a1, a2, a3, a4, mod;
        cin >> a1 >> a2 >> a3 >> a4;
        int total = 0;
        int rest = abs(a2 - a3) + a4;
        int iszero = a1 - rest + 1;

        total = a1 + 2 * min(a2, a3);
        if(a1==0){
            total=1;
        }
        else if (iszero >= 0 && rest != 0 )
        {
            total += rest;
        }
        
        else if (iszero < 0)
        {
            total += a1 + 1;
        }
        

        cout << total << endl;
    }

    return 0;
}