#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    int out=1;
    while (samples--)
    {
        int m,n,p;
        long long int sum=0;
        cin>>m>>n>>p;
        int arr[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            int maxim = -1;
            for (int j = 0; j < m; j++)
            {
                maxim = max(maxim, arr[j][i]);
            }
            sum += maxim;
        }
        long long int sum_john=0;
        for (int i = 0; i < n; i++)
        {
            sum_john+=arr[p-1][i];
        }
        cout<<"Case #"<<out<<": "<<(sum-sum_john)<<endl;
        out++;
    }

    return 0;
}