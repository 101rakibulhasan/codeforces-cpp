#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x,low, best_count = 0, worst_count = 0;
    cin >> x;
    low = x;
    n--;
    while(n--)
    {
        cin >> x;

        if(low < x)
        {
            best_count++;
            //cout << "wha" <<best_count << endl;
        }else if(low > x)
        {
            worst_count++;
            //cout << "whadsad" <<worst_count << endl;
        }

        low = x;
    }

    //cout << best_count;
    //cout << worst_count;

    if(worst_count == 0 || best_count == 0)
    {
        cout << "1";
    }else
    {
        if(worst_count > best_count)
        {
            cout << best_count;
        }else
        {
            cout << worst_count;
        }

    }




    return 0;
}
