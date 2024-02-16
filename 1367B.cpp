#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        int mod_ind[n] = {0};
        int mod_arr[n] = {0};
        for(int i=0; i < n; i++) cin >> arr[i];
        for(int i=0; i < n; i++)
        {
            if(i % 2 != arr[i] % 2)
            {
                mod_ind[i] = i % 2;
                mod_arr[i] = arr[i] % 2;
            }
        }
        // sort(mod_ind, mod_ind+n);
        // sort(mod_arr, mod_arr+n);

        for(int i=0; i < n; i++ ) cout << mod_ind[i] << " ";
        cout << endl;
        for(int i=0; i < n; i++ ) cout << mod_arr[i] << " ";
        cout << endl;

        int _count = 0;
        for(int i=0; i < n; i++)
        {
            if(mod_ind[i] != mod_arr[i]) _count++;
        }

        if(_count % 2 == 0) cout << _count/2 << endl;
        else cout << -1 << endl;

    }
    return 0;
}
