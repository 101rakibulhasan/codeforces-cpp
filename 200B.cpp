#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double n;
    cin >> n;
    double sum=0;

    for(int i=0;i < n;i++)
    {
        double x;
        cin >> x;
        sum = sum + x;
    }

    cout << setprecision(14) << sum/n << endl;
}
