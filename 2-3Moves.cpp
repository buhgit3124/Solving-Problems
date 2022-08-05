#include <iostream>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        long long int point;
        cin >> point;
        int store2 = point % 2;
        int store3 = point % 3;
        if (point == 0)
        {
            cout << 0 << endl;
        }

        else if (store3 == 0)
        {
            cout << point / 3 << endl;
        }
        else if (store3 == 2)
        {
            cout << (point / 3) + 1 << endl;
        }
        else if (store3 == 1)
        {
            if (store2 == 1)
            {
                cout << (point / 3) + 2 << endl;
            }
            else
            {
                cout << (point / 3) + 1 << endl;
            }
        }
    }
    return 0;
}