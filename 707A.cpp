#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int c = 0,m=0, y = 0, w = 0, g = 0, b = 0;

    int a,d;cin >> a >>d;
    for(int i = 0 ; i < a ; i++)
    {
        for(int j=0; j < d; j++)
        {
            char v; cin >> v;
            switch(v)
            {
                case 'C':
                    c++;
                    break;
                case 'M':
                    m++;
                    break;
                case 'Y':
                    y++;
                    break;
                case 'W':
                    w++;
                    break;
                case 'G':
                    g++;
                    break;
                case 'B':
                    b++;
                    break;
                default:
                    break;
            }
        }
    }

    if((b > 0 || w > 0 || g > 0 ) && (c == 0 && m == 0 && y == 0))
    {
        cout << "#Black&White" << endl;

    }else
    {
        cout << "#Color" << endl;
    }

    return 0;
}