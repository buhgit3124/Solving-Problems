
#include <bits/stdc++.h>
using namespace std;

class print
{
public:
    void printer(int *ptr)
    {
        cout << *ptr << endl;
    }

    void printer(char *ptr)
    {
        cout << *ptr << endl;
    }
    void printe(void *ptr, char identify)
    {
        // typecasting the void pointer haha
        switch (identify)
        {
        case 'c':
            cout << *((char *)ptr) << endl;
            break;
        case 'i':
            cout << *((int *)ptr) << endl;
            break;

        default:
            cout << "Please enter a valid identifier :(" << endl;
            break;
        }
    }
};

int main()
{
    int samples;
    print print;
    cin >> samples;
    while (samples--)
    {
        // learning void pointers
        int n = 3;
        int *ptr = &n;
        char gul = 'c';
        print.printer(ptr);
        // or
        print.printer(&gul);
        print.printe(&n, 'i');
        print.printe(&gul, 'c');
        // inside main function
        void *pter;
        int mega = 6;
        pter = &mega;
        cout << *((int *)pter) << endl;
        cout << &n << endl;
    }
    return 0;
}