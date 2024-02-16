#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string d;
    cin >> d;
    string f;
    cin >> f;

    for(int i = 0; i<s.size();i++)
    {
        for(int j = 0; j<f.size();j++)
        {
            if(f[j] == s[i])
            {
                f[j] = '0';
                break;
            }
        }
    }

    //cout << f;

    for(int i = 0; i<d.size();i++)
    {
        for(int j = 0; j<f.size();j++)
        {
            if(f[j] == d[i])
            {
                f[j] = '0';
                break;
            }
        }
    }




    string z = "YES\n";

    if(f.size() != s.size() + d.size())
    {
        z = "NO\n";
    }

    for(int j = 0; j<f.size();j++)
        {
            if(f[j] != '0')
            {
                z = "NO\n";
            }
        }

    cout << z;
    return 0;
}
