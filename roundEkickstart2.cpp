#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    int out=1;
    while (samples--)
    {
        int n,store;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Case #"<<out<<": ";
        
        for (int i = 0; i < n; i++)
        {
            store=-1;
            for (int j = 0; j < n && j!=i ; j++)
            {
                if(2*arr[i]>=arr[j]&&store<arr[j]){
                    store=arr[j];                
                     }   
            }
            cout<<store<<" ";
            
        }
        cout<<endl;
        out++;
    }

    return 0;
}