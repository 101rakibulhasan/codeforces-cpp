#include<iostream>

using namespace std;

int main()
{
    int x,y,_count=0, sum=0;
    cin >> x >> y;

    int mid = 240 - y;

    int i;
    for(i = 1; i <= x; i++)
    {
        sum += i * 5;
        //cout <<mid << " " <<sum << endl;
        if(sum > mid)
        {
            break;
        }
        _count++;
    }

    cout << _count;
    return 0;
}
