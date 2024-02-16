#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int flag = 0;
        for(int i=0; i < n;i++)
        {
            if(flag == 1) break;
            while(s[i] == s[i+1]) i++;
            for(int j=i+2; j < n; j++)
            {
                if(s[j] == s[i])
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 1) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
    return 0;
}
