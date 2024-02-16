#include<iostream>

using namespace std;

int main()
{
    int Tetrahedron = 4;
    int Cube = 6;
    int Octahedron = 8;
    int Dodecahedron = 12;
    int Icosahedron = 20;

    int n,sum=0;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;

        if(s == "Tetrahedron")
        {
            sum += Tetrahedron;
           // cout << Tetrahedron;
        }

        if(s == "Cube")
        {
            sum += Cube;
            //cout << Cube;
        }

        if(s == "Octahedron")
        {
            sum += Octahedron;
            //cout << Octahedron;
        }

        if(s == "Dodecahedron")
        {
            sum += Dodecahedron;
            //cout << Dodecahedron;
        }

        if(s == "Icosahedron")
        {
            sum += Icosahedron;
            //cout << Icosahedron;
        }

    }

    cout << sum;
    return 0;
}
