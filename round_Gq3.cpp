#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        if((c*d)/(a*b)<2){
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<0<<" "<<0<<endl;
        }
    }

    return 0;
}