#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    int out=1;
    while (samples--)
    {
        int n,i=1;
        cin>>n;
        string pal;
        cin>>pal;
        for (i = 1;pal[i]!=pal[0] ; i++)
        {
            /* code */
        }
        i++;
        cout<<"Case #"<<out<<": ";
        if(i==2){
            cout<<pal[0];
        }
        else{
            for(int j=0;j<i;j++){
                cout<<pal[j];
            }
        }
        cout<<endl;
        out++;
    }

    return 0;
}