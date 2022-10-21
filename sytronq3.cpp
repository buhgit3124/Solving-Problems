#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int a=0, b=0, c=0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'A')
            {
                a++;
            }
            if (s[i] == 'B')
            {
                b++;
            }
            if (s[i] == 'C')
            {
                c++;
            }
        }
        if(c+a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}