#include<iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;

    int stage = 0;

    for(int i = 0; i <x;i++)
    {
        for(int j = 0; j <y;j++)
        {
            if(i % 2 == 0)
            {
                if(j != y - 1)
                {
                    cout << "#";
                }else
                {
                    cout << "#\n";
                }

            }else
            {
                if(stage % 2 == 0)
                {
                    if(j != y - 1)
                    {
                        cout << ".";
                    }else
                    {
                        cout << "#\n";
                        stage++;
                    }
                }else
                {
                    if(j == 0)
                    {
                        cout << "#";
                    }else if(j == y - 1)
                    {
                        cout << ".\n";
                        stage++;
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
        }
    }
    return 0;
}
