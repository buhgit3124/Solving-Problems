#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    int out=1;
    while (samples--)
    {
        int n;
        cin>>n;
        int times;
        if(n%5!=0){
            times=(n/5) +1;
        }
        else{
            times=n/5;
        }
       
        cout<<"Case #"<<out<<": "<<times<<endl;
        out++;
       
        
    }

    return 0;
}