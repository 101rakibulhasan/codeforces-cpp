#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int tc; cin >> tc;
    while(tc--)
    {
        int arr[4];
        int _sort[4];
        for(int i = 0 ; i < 4; i++)
        {
            cin >> arr[i];
            _sort[i] = arr[i];
        }
        sort(_sort,_sort+4);

        if(((arr[3] == _sort[3] || arr[2] == _sort[3]) && (arr[0] == _sort[2] || arr[1] == _sort[2])) || ((arr[3] == _sort[2] || arr[2] == _sort[2]) && (arr[0] == _sort[3] || arr[1] == _sort[3]))) 
        {
            cout << "YES";
        }else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}