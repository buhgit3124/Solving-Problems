#include <bits/stdc++.h>
using namespace std;

int getmin(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int getmax(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

void getMin_Max(int array[], int size, int *max, int *min)
{
    *max = array[0];
    *min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (*max < array[i])
        {
            *max = array[i];
        }
        if (*min > array[i])
        {
            *min = array[i];
        }
    }
}

int main()
{
    int number[] = {2, 3, 5, 67, -1};
    int min=number[0], max=number[0];
    getMin_Max(number, 5, &max, &min);
    cout << "The min is " << min << endl;
    cout << "The max is " << max << endl;

    return 0;
}