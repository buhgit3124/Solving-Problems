#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin >> n;
        int arr[n], sum = 0, count = 1;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i];
            if (sum == arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
            if (arr[0] == arr[i + 1])
            {
                count++;
            }
        }
        if (count == n)
        {
            flag = true;
        }
        if (flag == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}