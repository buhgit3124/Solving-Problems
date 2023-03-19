#include <bits/stdc++.h>
using namespace std;
using ll= long long; 

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        string n;
        cin >> n;
        ll first=n[0]-'0';
        ll second=n[2]-'0';
        cout<<first+second<<endl;

    }
}