#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;
 
signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
 
    long long int b,k; cin >> b >> k;
    long long int sum = 0;
    long long int t = k;
    long long int last_digit = b % 10;
    while (t--)
    {
        long long int x; cin >> x;
        if(t == 0)
        {
            sum += x; 
        }else
        {
            sum += x * b;
        }
        //cout << sum << endl;
    }  
 
    if(sum % 2 == 0)
    {
        cout << "even" << endl;
    }else
    {
        cout << "odd" << endl;
    }
    
 
    return 0;
}