#include <bits/stdc++.h>
using namespace std;
int main()
{

    string a, b;
    cin >> a >> b;

    int len_a = a.length();
    for (int i = 0; i < len_a; i++)
    {
        if (a[i] == b[i])
        {
            cout << '0';
        }
        else
        {
            cout << '1';
        }
        }
    cout << endl;

    return 0;
}