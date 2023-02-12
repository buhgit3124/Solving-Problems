#include <iostream>
using namespace std;

/* int prod(int arr[], int init, int n)
{
    int prod_end = 1;
    for (int i = init; i < n; i++)
    {
        prod_end = prod_end * arr[i];
    }

    return prod_end;
} */

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin >> n;
        int arr[n];
        int productt=1,prod_end=1,prod_start=1;
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            productt*=arr[i];
        }
        //cout<<prod_end<<endl;
        for (int i = 0; i < n; i++)
        {
            prod_start=prod_start*arr[i];
            prod_end=productt/prod_start;
            if (prod_start==prod_end)
            {
                cout<<i+1<<endl;
                flag=false;
                break;
            }
            
        }
        if(flag){
            cout<<-1<<endl;
        } 
    }
}