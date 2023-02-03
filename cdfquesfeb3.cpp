#include <iostream>
using namespace std;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        char n;
        cin >> n;
        string check="codeforces";
        bool flag=false;
        for (int i = 0; i < check.size(); i++)
        {
            if(n==check[i]){
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