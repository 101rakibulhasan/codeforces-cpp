#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int arr[100001] = {0};
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 0;
    arr[3] = 0;

    // 1 = not prime
    // 0 = prime

    for(int i = 4; i < 100001; i+=2) arr[i] = 1;

    for(int i = 3; i < 100001; i+=2)
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

    vector<int> v;
    for(int i = 2; i < 100001; i++)
    {
        if(arr[i] == 0) v.push_back(i);
    }

    int n; cin >> n;

    vector<int> num;
    int j = 0, sum = 0, _count =0;
    while(1)
    {
        sum += v[j];
        num.push_back(v[j]);
        _count++;
        if(sum > n)
        {
            j++;
            num.pop_back();
            num.pop_back();
            _count--;
        }

        if(sum == n) break;
    }

    cout << n << endl;
    // for(int i =0; i < num.size(); i++) cout << num[i] << " ";
    cout <<  endl;
    

    return 0;
}