#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {6, 7, 8, 9};
    // name of array is a pointer to the first location
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;
    cout << arr[4] << endl;
    return 0;
}
