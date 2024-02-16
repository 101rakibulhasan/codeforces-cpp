#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    cin >> line;

    int _count = 0;

    for(int i = 0; i < line.size() - 1; i++)
    {
        for(int j = i + 1; j < line.size(); j++)
        {
            if(line[i] == line[j])
            {
                line[j] = ' ';
            }
        }
    }

    for(int i = 0; i < line.size(); i++)
    {
        if(line[i] == ' ')
        {
            continue;
        }

        _count++;
    }


    if(_count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
