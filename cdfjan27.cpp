#include<iostream>
using namespace std;

int main(){
    int samples;
    cin>>samples;
    while (samples--)
    {
        string n;
        cin>>n;
        string correct="314159265358979323846264338327";
        int i=0,count=0;

       while (correct[i]==n[i]&&i<30)
       {
        i++;
        count++;
       }
       
        cout<<count<<endl;
    }
    
}