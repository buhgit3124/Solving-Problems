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
        int input[n][n - 1];
        int last = 0;
        int rep = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> input[i][j];
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (input[0][n - 2] != input[i][n - 2])
            {
                if (input[0][n - 2] == (input[i - 1][n - 2] || input[i + 1][n - 2]) && i != 0 && i != n - 1)
                {
                    last = i;
                    break;
                }
                else{
                    last=0;
                }
            }
        }
        while (true)
        {
            if (input[rep - 1][n - 2] == (input[rep][n - 2] && input[rep + 1][n - 2]))
            {
                rep++;
                break;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            cout << input[last][i] << " ";
        }
        cout << input[rep][n - 2] << endl;
    }
}