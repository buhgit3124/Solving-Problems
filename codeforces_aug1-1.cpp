#include <bits/stdc++.h>
using namespace std;
int main()
{
    int samples;
    cin >> samples;
    while (samples--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int totalSleep = h * 60 + m;
        int clock_hours, clock_minutes;
        int final=1444;

        while (n--)
        {
            cin >> clock_hours >> clock_minutes;
            int hours, minutes;
            int totalAlarm = 60 * clock_hours + clock_minutes;
            int ans = totalAlarm - totalSleep;

            if (ans < 0)
            {
                ans = 24 * 60 - totalSleep + totalAlarm;
            }
           
            final=min(ans,final);
        }

        cout << final / 60 << " " << final % 60 << endl;
    }

    return 0;
}