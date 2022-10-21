#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);

        int ans=INT_MAX;
        
         for (int i = 0; i < n - 2; i++)
        {
            int b = abs(arr[i + 2] - arr[i + 1]) + abs(arr[i + 1] - arr[i]);
            ans = min(ans, b);
        }
        cout<<ans<<endl;
    }

    return 0;
}