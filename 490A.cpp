#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    vector<int> ind_one;
    vector<int> ind_two;
    vector<int> ind_three;
    for(int i=0; i < n ; i++)
    {
        cin >> arr[i];
        int x = i+1;
        if(arr[i] == 1) ind_one.push_back(x);
        if(arr[i] == 2) ind_two.push_back(x);
        if(arr[i] == 3) ind_three.push_back(x);
    }

    int length = min(ind_one.size(), min(ind_two.size(), ind_three.size()));
    cout << length << endl;

    for(int i=0; i < length; i++)
    {
        cout << ind_one[i] << " " << ind_two[i] << " " << ind_three[i] << endl;
    }
    return 0;
}
