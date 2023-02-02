#include<iostream>
using namespace std;

int main(){
    int samples;
    cin>>samples;
    while (samples--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        bool check=true;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]==-1&&arr[i+1]==-1)
            {
                arr[i]=1;
                arr[i+1]=1;
                check=false;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
        }
        if(sum==n&&check){
            cout<<sum-4<<endl;
        }
        else
            cout<<sum<<endl;
    }
    
}