#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
int temp;
cout<<n<<" ";
temp=n;
n=n+temp;
fibonacci(n);

}
int main()
{
   int n;
   cout<<"Enter the no. of fibonacci terms"<<endl;
   cin>>n;
   if(n>2)
    fibonacci(7);

    return 0;
}