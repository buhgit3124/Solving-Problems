#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {  
        int n;
        cin>>n;
        int arr[n];
        string cover,coverf;
        cin>>cover;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        coverf=cover;
        for (int i = 1; i < n-1; i++)
        {
            if (cover[i]=='0')
            {
                if ((cover[i-1]=='1'&&cover[i+1]=='0')||(cover[i-1]=='0'&&cover[i+1]=='1'))
                {
                    
                }
                if (cover[i-1]=='1'&&cover[i+1]=='1')
                {
                    if(arr[i]>arr[i-1]){
                        
                    }
                }
                
            }
            
        }
        
   
    }

    return 0;
}