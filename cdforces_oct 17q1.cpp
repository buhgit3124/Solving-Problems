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
        int ans;
        ans=((10-n)*(10-n-1)*6)/2;
        cout<<ans<<endl;
     }
 
     return 0;
 }