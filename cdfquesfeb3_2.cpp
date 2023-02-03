#include <iostream>
using namespace std;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;

         int l = 0, h = n - 1;
        while (l < h)
        {
            if ((s[l] == '1' && s[h] == '1') || (s[l] == '0' && s[h] == '0'))
            {
                break;
            }
            l++;
            h--;
        }
        cout<<h-l+1<<endl;
        
    }
}