#include<iostream>

using namespace std;

int main()
{
    int x,y;
    string s,exp;
    cin>>x >> y>>s;
    exp = s;
    for(int j = 0; j<y;j++)
    {
        for(int i = 0; i<x;i++)
        {
            if(s[i] == 'B' && s[i + 1] == 'G')
            {
                exp[i] = 'G';
                exp[i+1] = 'B';
            }
        }
        s = exp;
    }

    cout << exp <<endl;
    return 0;
}
