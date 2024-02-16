#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int arr[51] = {0};
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 0;
    arr[3] = 0;

    // 1 = not prime
    // 0 = prime

    for(int i = 4; i < 51; i+=2) arr[i] = 1;

    for(int i = 3; i < 51; i+=2)
    {
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                arr[i] = 1;
                break;
            }
        }
    }

    int a,b; cin >> a >> b;
    for(int i = a+1; i <= b; i++)
    {
        if(i == b && arr[i] == 1)
        {
            cout << "NO" << endl;
            break;
        }else
        {
            if(arr[i] == 0)
            {
                if(i == b) 
                {
                    cout << "YES" << endl;
                    break;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        
    }

    return 0;
}