#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    int isABA = 0;
    int isBAB = 0;

    int hasAB = 0, hasBA = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
        {
            if(s[i+2] == 'A' && i + 2 < s.size())
            {
                isABA++;
                i += 2;
            }else{
                hasAB++;
                i += 1;
            }
        }else if(s[i] == 'B' && s[i+1] == 'A')
        {
            if(s[i+2] == 'B' && i + 2 < s.size())
            {
                isBAB++;
                i += 2;
            }else{
                hasBA++;
                i += 1;
            }
        }
    }

//    cout << "hasAB: " << hasAB << endl;
//    cout << "hasBA: " << hasBA << endl;
//    cout << "isABA: " << isABA << endl;
//    cout << "isBAB: " << isBAB << endl;

    if(hasAB > 0 && hasBA > 0 || (isABA + isBAB > 1) || (hasAB > 0 && (isABA > 0 || isBAB > 0)) || (hasBA > 0 && (isABA > 0 || isBAB > 0)))
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return 0;
}
