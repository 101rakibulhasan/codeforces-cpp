#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int highest_0 = 0;
    int highest_1 = 0;
    char cursor = s[0];

    int already0 = 0;
    int already1 = 0;
    for(int i=0;i < s.size(); i++)
    {
        if(s[i] == cursor)
        {
            if(s[i] == '1')
            {
                highest_1++;
                already1 = 1;
            }else{
                highest_0++;
                already0 = 1;

            }
        }else{
            if(s[i] == '1')
            {
                cursor = '1';
            }else{
                cursor = '0';
            }

            if(already0 == 1 && s[i] == '0' && highest_0 < 7)
            {
               highest_0 = 1;
            }else if(already0 == 0 && s[i] == '0' && highest_0 < 7)
            {
                highest_0 = 1;
            }

            if(already1 == 1 && s[i] == '1' && highest_1 < 7)
            {
                highest_1 = 1;
            }else if(already1 == 0 && s[i] == '1' && highest_1 < 7)
            {
                highest_1 = 1;
            }
        }
    }

    if(highest_1 >= 7 || highest_0 >= 7)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return 0;
}
