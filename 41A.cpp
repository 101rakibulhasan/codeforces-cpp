#include<iostream>

using namespace std;

int main()
{
    string s,y;
    cin >> s >> y;

    string com = "YES\n";

    for(int i=0; i<s.size();i++)
    {
        if(s[i] != y[y.size()-1-i])
        {
            com = "NO\n";
        }
    }

    cout << com << endl;
    return 0;
}
