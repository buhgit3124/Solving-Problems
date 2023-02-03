#include <iostream>
using namespace std;

int digit_sum(int n){
    int sum=0;
    int m=0;
    while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}
return sum;   
}

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (q--)
        {
            int query;
            cin>>query;
            if(query==1){
                int l,r;
                cin>>l>>r;
                for (int i = l-1; i < r; i++)
                {
                   arr[i]=digit_sum(arr[i]);
                }
                
            }
            else{
                int out;
                cin>>out;
                cout<<arr[out-1]<<endl;
            }
        }
        
    }
}