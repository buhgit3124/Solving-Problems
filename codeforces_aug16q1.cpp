#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      long int first=a*d;
      long int second=b*c;
      long int rem=-1;
      long int record=-1;

      
      if(first>second){
        rem=first%second;
        if (rem!=0 ){
          record=first%rem;
          }

      }
      if(first<second){
        rem=second%first;
        if (rem!=0){
          record=second%rem;
          }
      }
      if(first == second){
        cout<<"0"<<endl;
      }
      else if((rem==0 || record==0) && rem!=1){
        cout<<"1"<<endl;
      }
      else{
        cout<<"2"<<endl;
      }
    }

    return 0;
}