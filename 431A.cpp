#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d; cin >> a >> b >> c >> d;
    string s; cin >> s;

    int _count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1') _count += a;
        else if(s[i] == '2') _count += b;
        else if(s[i] == '3') _count += c;
        else if(s[i] == '4') _count += d;
    }

    cout << _count << endl;
    return 0;
}
