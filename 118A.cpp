#include <iostream>
using namespace std;

int main()
{
    string s; cin >>s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = (s[i] - 'A') + 'a';
            }

            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
            {
                cout << "." << s[i];
            }
        }

    }


    return 0;
}
