#include<iostream>

using namespace std;

int main()
{
    int n,_count = 0;
    cin >> n;

    while(1)
    {
        if(n <= 0)
        {
            break;
        }

        if(n > 5)
        {
            n = n -5;
            _count++;
        }else
        {
            n = n - n;
            _count++;
        }

    }

    cout << _count << endl;
    return 0;
}
