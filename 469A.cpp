#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1] = {0};

    int p;
    cin >> p;

    while(p--)
    {
        int x;
        cin >> x;

        arr[x] = 1;
    }

    int q;
    cin >> q;

    while(q--)
    {
        int x;
        cin >> x;

        arr[x] = 1;
    }

    string s =  "I become the guy.\n";

    for(int i = 1; i<=n;i++)
    {
        //cout << arr[i] << endl;

        if(arr[i] == 0)
        {
            s =   "Oh, my keyboard!\n";
            break;


        }
    }

    cout << s;

}
