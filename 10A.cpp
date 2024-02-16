#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int arr[2*n];

    int total_power = 0;

    for(int i=0; i < 2*n; i+=2)
    {
        cin >> arr[i];
        cin >> arr[i+1];

        total_power += (arr[i+1] - arr[i]) * p1;
        
    }

    // cout << total_power << endl;

    int break_start = 1;
    int break_end = 2;

    while(break_end<2*n)
    {
        int break_time = arr[break_end] - arr[break_start];
        // cout << break_time << endl;
        if(break_time > t1)
        {
            if(break_time > t1+t2)
            {
                total_power += t1*p1+t2*p2+(arr[break_end]-arr[break_start]-t1-t2)*p3;

                // cout << break_start <<"3:"<< break_end<< "=" << total_power << endl;
            }else
            {
                total_power +=t1*p1 + (arr[break_end] - arr[break_start]-t1) * p2;
            }
        
        }else
        {
            total_power += break_time * p1;
        }
        
        break_start = break_end+1;
        break_end = break_start+1;
    }

    cout << total_power << endl;

    return 0;
}