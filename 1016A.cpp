#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    long long int n,m; cin >> n >> m;
    
    
    long long int rem = 0;
    int flag = 0;
    int flag2 = 0;
    
    while(n--)
    {
        long long int page = 0;
        long long int x; cin >> x;
        if(x < rem)
        {
            rem = rem - x;
            flag2 = 1;
        }else
        {
            if(rem > 0) flag = 1;
            x = x - rem;
            
        }
        
        page = x/m;
        if(flag == 1) page++; 
        if(flag2 == 0) 
        {
            rem = m- x%m;
                
        }
        flag = 0;
        flag2 = 0;
        cout << page << " ";
        
    }

    cout << endl;

    return 0;
}