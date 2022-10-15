#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] != '0' && s[i + 2] != '0')
            {
                cout << 'a';
            }
            else if (s[i] == '1' && s[i + 1] != '0' && s[i + 2] == '0')
            {
                if (s[i + 1] == '0')
                {
                    cout << 'j';
                }
                if (s[i + 1] == '1')
                {
                    cout << 'k';
                }
                if (s[i + 1] == '2')
                {
                    cout << 'l';
                }
                if (s[i + 1] == '3')
                {
                    cout << 'm';
                }
                if (s[i + 1] == '4')
                {
                    cout << 'n';
                }
                if (s[i + 1 ]== '5')
                {
                    cout << 'o';
                }
                if (s[i + 1] == '6')
                {
                    cout << 'p';
                }
                if (s[i + 1] == '7')
                {
                    cout << 'q';
                }
                if (s[i + 1] == '8')
                {
                    cout << 'r';
                }
                if (s[i + 1 ]== '9')
                {
                    cout << 's';
                }
            }

            if (s[i] == 2 && (s[i + 1] != 0 && s[i + 2] != 0))
            {
                cout << 'b';
            }
            else if (s[i] == 2 && s[i + 1] != 0 && s[i + 2] == 0)
            {
                if (s[i + 1 ]== '0')
                {
                    cout << 't';
                }
                if (s[i + 1 ]== '1')
                {
                    cout << 'u';
                }
               
                if (s[i + 1 ]== '2')
                {
                    cout << 'v';
                }
                 if (s[i + 1 ]== '3')
                {
                    cout << 'w';
                }
                
                 if (s[i + 1 ]== '4')
                {
                    cout << 'x';
                }
                 if (s[i + 1 ]== '5')
                {
                    cout << 'y';
                }
                 if (s[i + 1 ]== '6')
                {
                    cout << 'z';
                }
                
            
               
            }
            if (s[i] == 3 && s[i + 1] != 0 && s[i + 2] != 0)
            {
                cout << 'c';
            }
            if (s[i] == 4 && s[i + 1] != 0 && s[i + 2] != 0)
            {
                cout << 'd';
            }
            if (s[i] == 5 && s[i + 1] != 0 && s[i + 2] != 0)
            {
                cout << 'e';
            }
            if (s[i] == 6 && s[i + 1] != 0 && s[i + 2] != 0)
            {
                cout << 'f';
            }
            if (s[i] == 7 && s[i + 1] != 0 && s[i + 2] != 0)
            {
                cout << 'g';
            }
            if (s[i] == 8 && s[i + 1] != 0 && s[i + 2] != 0)
            {
                cout << 'h';
            }
            if (s[i] == 9 && s[i + 1] != 0 && s[i + 2] != 0)
            {
                cout << 'i';
            }
            
        }
        cout << endl;
    }

    return 0;
}