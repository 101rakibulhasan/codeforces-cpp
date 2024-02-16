#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int first = s[0] + s[1] + s[2] - 3 * '0';
        int last = s[3] + s[4] + s[5] - 3 * '0';
        if(first == last)
        {
            cout << "YES" << endl;

        }else
        {

            cout << "NO" << endl;
        }

    }
    return 0;
}
