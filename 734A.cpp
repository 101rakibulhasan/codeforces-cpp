#include<iostream>

using namespace std;

int main()
{
    int n,a = 0,d=0;cin >>n;
    string s; cin >> s;
    for(int i=0; i < s.size(); ++i)
    {
        (s[i] == 'A') ? a++ : d++;
    }

    if(a > d) cout << "Anton\n";
    else if(a == d) cout << "Friendship\n";
    else cout << "Danik\n";
    return 0;
}
