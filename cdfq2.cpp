#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        string str;
        cin >> str;

        string str1;
        cin >> str1;

        str = str + str1;

        sort(str.begin(), str.end());

        if (str[0] == str[1] && str[2] == str[3] && str[2] == str[1])
        {
            cout << "0" << endl;
        }
        else if (str[2] == str[1] && (str[1] == str[0] || str[1] == str[3]))
        {
            cout << "1" << endl;
        }
        else if (str[1] == str[0] && str[2] == str[3])
        {
            cout << "1" << endl;
        }
        else if (str[1] == str[0] || str[2] == str[3] || str[1] == str[2])
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }

    return 0;
}