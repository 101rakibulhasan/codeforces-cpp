#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int a,b; cin >> a >> b;
    string server_name[a];
    string server_ip[a];
    string command_name[b];
    string command_ip[b];
    for (int i = 0; i < a; i++)
    {
        cin >> server_name[i] >> server_ip[i];
    }

    for (int i = 0; i < b; i++)
    {
        cin >> command_name[i] >> command_ip[i];

        int length = command_ip[i].size();

        string name = "";

        for(int j=0; j < a; j++)
        {
            if(length-1 == server_ip[j].size())
            {
                string x = server_ip[j] + ';';
                if(command_ip[i] == x)
                {
                    name = server_name[j];
                    break;
                }
                
            }else
            {
                continue;
            }
        }

        
        cout << command_name[i] << " " <<command_ip[i] << " #" << name << endl;
    }
    

    return 0;
}