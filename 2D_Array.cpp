#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the Rows and Columns --\n";
    int rows, cols;
    cin >> rows >> cols;

    int **head = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        head[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element at array[" << i << "]"
                 << "[" << j << "]";
            cin >> head[i][j];
            cout << endl;
        }
    }

    cout << "The allocated 2D Array is " << endl;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "The element at array[" << i << "]"
                 << "[" << j << "] is ";
            cout<< head[i][j];
            cout << endl;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] head[i];
    }
    
    delete[]head;
    head=NULL;
    return 0;
}