#include <iostream>
using namespace std;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int x=0,y=0;
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='L'){
                x+=-1;
            }
            else if(s[i]=='R'){
                x+=1;
            }
            else if(s[i]=='D'){
                y+=-1;
            }
            else {
                y+=1;
            }
            if(x==1&&y==1){
                flag=true;
                break;
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}