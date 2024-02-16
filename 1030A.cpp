#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "EASY\n";

    for(int i = 0; i < n;i++)
    {
        int x;
        cin >> x;

        if(x == 1)
        {
            s = "HARD\n";
        }
    }

    cout << s;
    return 0;
}
