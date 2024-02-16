#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    cin >> line;

    if(line[0] > 90)
    {
        line[0] = line[0] - 32;
    }

    cout << line << endl;



    return 0;
}
