#include <iostream>
using namespace std;

int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int remain=s-r;
        int dist=r/(n-1);
        int rem=r%(n-1);

        cout<<remain<<" ";

        for (int i = 0; i < n-1; i++)
        {
            if(rem==0){
                cout<<dist<<" ";
            }
            else{
                cout<<dist+1<<" ";
                rem--;
            }
        }
        cout<<endl;

        
    }
}