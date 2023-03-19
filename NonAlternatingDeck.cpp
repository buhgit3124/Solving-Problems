#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        ll n;
        cin >> n;
        ll count = 1, alice = 1, bob = 0,total=0,card=0,turns=0;
        while (n--)
        {   
            //count++;
            if(total<=n){
                break;
            }
                alice+=count;
                count++;
                alice+=count;
                count++;
            
            total=alice+bob;
        }
        
    }
}