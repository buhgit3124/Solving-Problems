#include<bits/stdc++.h>
using namespace std;
int main()
{
int samples;
cin>>samples;
while(samples--)
{
    cout<<"Enter the number of elements \n";
    int size;
    cin>>size;
    int* a=new int(size);
    cout<<"Enter N elements--"<<endl;
    for(int i = 0;i<size;i++) 
    {
      cin>>a[i];
    }
    cout<<"Entered elements are: ";
   for(int i = 0;i<size;i++) {
      cout<<a[i]<<" ";
   }
   cout<<endl;
   delete(a);
}
return 0;
}