#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int w,h,n,_c = 0;cin >> w >> h >> n;

        while(w % 2 == 0 || h % 2 == 0)
        {
            if(w % 2 == 0)
            {
                w = w / 2;
            }else
            {
                h = h / 2;
            }
            _c++;
        }

        if(_c >= n)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
