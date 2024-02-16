#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int arr['z'+1] = {0};

    for(int i = 0 ; i <s.size(); i++)
    {
        if(s[i] <= 'z' && s[i] >= 'a')
        {
            arr[s[i]] = 1;
        }
    }

    int _count = 0;
    for(int i = 'a'; i<='z'; i++)
    {
        if(arr[i] == 1)
        {
            _count++;
        }
    }

    cout << _count;
    return 0;
}
