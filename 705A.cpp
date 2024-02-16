#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string hate = "I hate ";
    string love = "I love ";
    string temp = "that ";
    for(int i = 1; i<=n;i++)
    {
        if(i == n)
        {
            temp = "it\n";
        }
        if(i % 2!= 0)
            cout << hate << temp;
        else
            cout << love << temp;
    }
    return 0;
}
