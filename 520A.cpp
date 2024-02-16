#include<iostream>
#include<string>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    int arr['z'+1] = {0};

    for(int i=0; i< s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    for(int i=0; i< s.size(); i++)
    {
        arr[s[i]] = 1;
    }

    int a = 'a';
    int z = 'z';

    int check = 0;

    for(int i = a; i <=z; i++)
    {
        if(arr[i] == 0)
        {
            check = 1;
        }
    }

    if(check == 1)
    {
        cout << "NO";
    }else
    {
        cout << "YES";
    }
    return 0;
}
