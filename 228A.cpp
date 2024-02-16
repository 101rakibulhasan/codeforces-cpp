#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    long long int arr[4],_count=0,m=0;

    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 4; i++)
    {
        if(m > _count)
        {
            _count = m;

        }
        m=0;
        for(int j = i+1; j < 4; j++)
        {
            if(arr[j] == arr[i])
            {
                m++;
            }
        }
    }

    cout << _count;
}
