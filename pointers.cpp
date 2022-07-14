#include <bits/stdc++.h>

using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n = 5;
        cout << "n\n";

        int *ptr = &n;
        cout << ptr << endl;
        cout << *ptr << endl;

        // wrong declaration
        int *newt;
        *newt = 6;
        cout << *newt << endl;
        
    }
    return 0;
}