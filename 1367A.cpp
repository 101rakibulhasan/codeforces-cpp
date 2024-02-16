#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        cout << s[0];
        for(int i=1; i < s.size()-1; i++)
        {
            cout << s[i];
            if(s[i] == s[i+1])
            {
               i++;
            }

        }
        cout << s[s.size()-1] << endl;
    }
    return 0;
}
