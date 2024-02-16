#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int n; cin >> n;
    int arrA[n], arrB[n];
    int _sumA = 0;
    int _sumB = 0;

    int v = 1;

    for(int i=0; i < n; i++)
    {
        cin >> arrA[i];
        _sumA += arrA[i];
    }

    for(int i=0; i < n; i++)
    {
        cin >> arrB[i];
        _sumB += arrB[i];
    } 

    int count10 = 0;

    // cout << _sumA <<endl;
    // cout << _sumB <<endl;

    for(int i=0; i < n; i++)
    {
        if(arrA[i] == 1 && arrB[i] == 0)
        {
            count10++;
        }
    } 

    if((_sumA == 0 && _sumB ==0) || (_sumB == n))
    {
        cout << -1 << endl;
    }else if(_sumA > _sumB)
    {
        cout << 1 << endl;
    }
    else if(_sumA <= _sumB)
    {
        int x = count10;
        if(x == 0)
        {
            v = -1;
        }else
        {
            while(_sumA <= _sumB)
            {
                _sumA += x;
                v++;
            }
        }
        
        cout << v << endl;
    }

    

    return 0;
}