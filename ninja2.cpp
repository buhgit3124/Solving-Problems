#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int input[n],count;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
            count++;
        }

        int l = 0, r = n - 1, minimum = 1, maximum = n;

        bool check = false;

        while (r - l >= 3)
        {

            if (input[l] == minimum)
            {
                l++;
                minimum++;
            }
            else if (input[l] == maximum)
            {
                l++;
                maximum--;
            }

            if (input[r] == maximum)
            {
                r--;
                maximum--;
            }
            else if (input[r] == minimum)
            {
                r--;
                minimum++;
            }
            if (input[l] != maximum && input[r] != maximum && input[r] != minimum && input[l] != minimum)
            {
                check = 1;
                break;
            }
        }
        if (check)
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}