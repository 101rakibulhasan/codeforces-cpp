#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int x; cin >> x;
    string s[x];
    for(int i=0; i <x; i++)
    {
        cin >> s[i];
    }

    int arr[s[0].size()] = {0};

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < s[0].size(); j++)
        {
            if(s[i][j] == '1') arr[j]++;
        }   
    }

    sort(arr,arr+s[0].size());

    cout << arr[s[0].size()-1] << endl;
    
    return 0;
}