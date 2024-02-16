#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    string first;
    string second;

    int num = 0;

    cin >> first >> second;

    for(int i = 0; i < first.size(); i++)
    {
        if(tolower(first[i]) == tolower(second[i]))
        {
            num = 0;
        }else if(tolower(first[i]) < tolower(second[i]))
        {
            num = -1;
            break;
        }else if(tolower(first[i]) > tolower(second[i]))
        {
            num = 1;
            break;
        }
    }

    cout << num << "\n";

    return 0;
}
