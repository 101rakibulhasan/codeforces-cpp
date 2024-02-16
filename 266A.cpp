#include<iostream>

using namespace std;

int main()
{
    int t,_count=0;
    cin >> t;
    string s;
    cin >> s;

    for (int i = 0; i < t-1;i++)
    {
        if(s[i] == s[i+1])
        {
            _count++;
        }
    }

    cout << _count << endl;
    return 0;
}
