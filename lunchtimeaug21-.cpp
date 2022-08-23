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
        if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}