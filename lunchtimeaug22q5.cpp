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
        long long int abs_sum1;
        long long int sub_sum1;
        long long int sub_sum2;
        long long int sub_sum3;
        long long int total_sum;
        long long int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            abs_sum1 = abs(arr[i]) + abs(arr[i + 1]) + abs(arr[i + 2]);
            sub_sum1 = abs(arr[i] - 1) + abs(arr[i + 1] - 2) + abs(arr[i + 2]);
            sub_sum2 = abs(arr[i] - 1) + abs(arr[i + 1] - 3) + abs(arr[i + 2] - 2);
            sub_sum3 = abs(arr[i]) + abs(arr[i + 1] - 1) + abs(arr[i + 2] - 2);

            while (abs_sum1 < sub_sum1 && abs_sum1 < sub_sum2 && abs_sum1 < sub_sum3)
            {

                if (sub_sum1 < sub_sum2 && sub_sum1 < sub_sum3)
                {
                    if (sub_sum1 < abs_sum1)
                    {
                        arr[i] = arr[i] - 1;
                        arr[i + 1] = arr[i + 1] - 2;
                        arr[i + 2] = arr[i + 2];
                    }
                }

                else if (sub_sum2 < sub_sum3 && sub_sum2 < sub_sum1)
                {
                    if (sub_sum2 < abs_sum1)
                    {
                        arr[i] = arr[i] - 1;
                        arr[i + 1] = arr[i + 1] - 3;
                        arr[i + 2] = arr[i + 2] - 2;
                    }
                }

                else if (sub_sum3 < sub_sum1 && sub_sum3 < sub_sum2)
                {
                    if (sub_sum3 < abs_sum1)
                    {
                        arr[i] = arr[i];
                        arr[i + 1] = arr[i + 1] - 1;
                        arr[i + 2] = arr[i + 2] - 2;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            total_sum += abs(arr[i]);
        }
        cout << total_sum << endl;
    }

    return 0;
}