// function to print n numbers
#include <iostream>
using namespace std;

void print(int n)
{
    if (n > 1)
    {
        print(n - 1);
    }
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the last number" << endl;
    cin >> n;
    print(n);
    cout<<endl;
    return 0;
}