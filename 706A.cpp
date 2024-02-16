#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int a,b; cin >> a >> b;
    double _min = INT_MAX;
    int tc; cin >> tc;
    while(tc--)
    {
        double x,y, v; cin >> x >> y >> v;
        double dis = (abs((x - a)*(x-a))+abs((y-b)*(y-b)));
        double sqrtdis = sqrt(dis);
        dis = (double) sqrtdis / (double) (v);

        // cout << dis << endl;

        if(dis < _min)
        {
            _min = dis;
        }
    }

    cout << fixed << setprecision(20) << _min << endl;

    return 0;
}