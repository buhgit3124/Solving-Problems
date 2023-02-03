#include <bits/stdc++.h>
using namespace std;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        long long int n, c;
        cin >> n >> c;
        long long int arr[n];
        long long int i = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] + i + 1;
        }
        sort(arr, arr + n);
        while ((c - arr[i]) >= 0 &&i<n)
        {
            c = c - arr[i];
            i++;
        }
        cout << i << endl;
    }
}