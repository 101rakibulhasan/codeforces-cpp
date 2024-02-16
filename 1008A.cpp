#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    string s; cin >> s;
    int flag = 0;

    
        for(int i = 0; i < s.size(); i++)
        {
            if(i == s.size()-1)
            {
                if(s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u' || s[i]=='n')
                {
                    flag = 0;
                }else
                {
                    flag = 1;
                }
            }
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u')
            {
                if(s[i] == 'n')
                {
                    continue;
                }else
                {
                    //cout << s[i] << s[i+1];
                    flag = 1;
                    break;
                }
            }
        }
    

    

    if(flag == 0)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }

    return 0;
}