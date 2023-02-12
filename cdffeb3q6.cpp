#include <iostream>
using namespace std;

long long int digit_sum(long long int n){
    long long int sum=0;
    long long int m=0;
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
    long long int samples;
    cin >> samples;
    while (samples--)
    {
        long long int n, q;
        cin >> n >> q;
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (q--)
        {
            long long int query;
            cin>>query;
            if(query==1){
                long long int l,r;
                cin>>l>>r;
                for (long long int i = l-1; i < r; i++)
                {
                   arr[i]=digit_sum(arr[i]);
                }
                
            }
            else{
                long long int out;
                cin>>out;
                cout<<arr[out-1]<<endl;
            }
        }
        
    }
}