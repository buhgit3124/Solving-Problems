#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int a,b;
        cin>>a>>b;
        int ans=a^b;
        cout<<ans<<endl;
    }

    return 0;
}