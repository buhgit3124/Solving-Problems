#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int a,n;
        string output;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        cin>>output;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i]==arr[j])
                {
                    if (output[i]!=output[j])
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                    
                }
                
            }
            
        }
        
        
    }

    return 0;
}