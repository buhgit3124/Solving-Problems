#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n,m;
        int arr[m];
        int kill=0;
        int count=1;
        for (int i = 0; i < m; i++)
        {
            cin>>arr[i];
        }
        if(count!=0){
        count=0;
        for (int i = 0; i < m; i++)
        {
            if(arr[i]%n!=0){
                count++;
            }
        }
        if(count!=0){
            kill++;
        }
        n--;
        }
        cout<<kill<<endl;
    }

    return 0;
}