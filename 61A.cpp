#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    string s,d;
    cin>> s>>d;
    string out = s;

    for(int i =0; i< s.size();i++)
    {
        (s[i] == d[i]) ? out[i]= '0' : out[i]='1';
    }

    cout << out << endl;
    return 0;
}
