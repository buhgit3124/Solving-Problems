#include <bits/stdc++.h>
using namespace std;

void swap(double* xp, double* yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bSort(double arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
int main()
{
    int samples;
    int out = 1;
    cin >> samples;
    while (samples--)
    {
        int rs, rh;
        cin >> rs >> rh;
        double real_radius = rs + rh;
        int countx = 0;
        int countz = 0;
        int n, m;
        cin >> n;

        int arrx[n][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arrx[i][j];
            }
        }
        double distX[n];
        for (int i = 0; i < n; i++)
        {
            distX[i] = sqrt(arrx[i][0] * arrx[i][0] + arrx[i][1] * arrx[i][1]);
            /*if (distX[i] - real_radius <= 0)
            {
                countx++;
            }*/
        }

        cin >> m;

        int arrz[m][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arrz[i][j];
            }
        }
        double distZ[m];
        for (int i = 0; i < m; i++)
        {
            distZ[i] = sqrt(arrz[i][0] * arrz[i][0] + arrz[i][1] * arrz[i][1]);
            /*if (distZ[i] - real_radius <= 0)
            {
                countz++;
            }*/
        }

        bSort(distX, n);
        bSort(distZ, m);
        if (n != 0 && m != 0)
        {
            if (distX[0] > distZ[0])
            {
                int i = 0;
                while (distX[i] < distZ[i])
                {
                    countx++;
                    i++;
                }
            }
            if (distZ[0] > distX[0])
            {
                int i = 0;
                while (distX[i] > distZ[i])
                {
                    countz++;
                    i++;
                }
            }
        }
        cout << "Case #" << out << ": " << countx << " " << countz << endl;
        out++;
    }

    return 0;
}