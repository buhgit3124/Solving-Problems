#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        double k;
        cin>>n>>k;
        int arr[n];
        double pre_sum1 = 0.00, pre_sum2 = 0.00;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        

        for (int i = 1; i < n; i++)
        {
            pre_sum1 += (double)arr[i - 1];
            pre_sum2 += (double)arr[i - 1];

            if (((arr[i] * 100.00) / pre_sum2) > k)
            {
                long double temp = ((double)(arr[i]) * (double)(100.00) / (double)k) - pre_sum2;
                temp = ceil(temp);
                pre_sum2 += temp;
            }
        }
        cout << (int)(pre_sum2 - pre_sum1) << endl;
        
    }

    return 0;
}