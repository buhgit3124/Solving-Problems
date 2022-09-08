#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin >> n;
        int arr[n];
        int i = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = arr[0];
        int index = 1;
        for (i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                index = i+1;
            }
        }
        cout << index << endl;
    }

    return 0;
}