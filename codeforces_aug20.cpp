#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1&&m==1){
            cout<<0<<endl;
        }
        else if(n>m||n==m){
            cout<<n+2*m-2<<endl;
        }
        else{
            cout<<m+2*n-2<<endl;
        }
    }

    return 0;
}