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
        int count = 0;
        int ones=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 1)
                count++;
            else if(arr[i]==1)
                ones++;
        }
        if(ones%2==0){
            count+=ones/2;
        }
        else
            count+=(ones/2)+1;

        cout<<count<<endl;
    }

    return 0;
}