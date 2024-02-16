#include<iostream>

using namespace std;

int main()
{
    int a,b,_count=0;
    cin >> a >> b;

    while(1)
    {
        if(a <= b)
        {
            a = a * 3;
            b = b*2;
            _count++;
        }else
        {
            cout << _count << endl;
            break;
        }
    }

    return 0;
}
