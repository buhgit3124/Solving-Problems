#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
    unsigned int n;
    long long unsigned int i;
    long long unsigned int k,b,s;
    long long unsigned int sum;
    cin>>n>>k>>b>>s;
    long long unsigned int last=b*k+k-1;
    long long unsigned int left_sum = s-last;
    long long unsigned int left_count=0;
    long long unsigned int left_rem=0;
    if(k==1){
    left_count=left_sum/1;
    left_rem=left_sum%1;
    }
    else{
    left_count=left_sum/(k-1);
    left_rem=left_sum%(k-1);  
    }
    if(s<=last &&s/k==b){
        last=s;
        cout<<last<<" ";
        for ( i = 0; i < n-1; i++)
        {
           cout<<0<<" ";
        }
        cout<<endl;
        
    }
    else{
    if(left_rem!=0){
        left_count++;
    }
    if(n<left_count){
        cout<<-1<<endl;
    }
    else{
        if(left_rem!=0){
            cout<<left_rem<<" ";
          for ( i = 1; i < left_count; i++)
        {
            cout<<k-1<<" ";
        }  
        }
        else {
            for ( i = 0; i < left_count; i++)
        {
             cout<<k-1<<" ";
        }
        }
          for ( i = 1; i < n-left_count; i++)
        {
            cout<<0<<" ";
        }
        cout<<last<<endl;  
         
    }
    }
    }

    return 0;
}