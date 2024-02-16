#include<bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int up = 0,low = 0;

    for(int i=0;i < word.size();i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            low++;
        }else
        {
            up++;
        }
    }

    if(up > low)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }else
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }

    cout << word << endl;
    return 0;
}
