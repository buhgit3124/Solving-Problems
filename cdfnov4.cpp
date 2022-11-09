#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        long long int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        
        cout<<abs(sum)<<endl;
    }

    return 0;
}