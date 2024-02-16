#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

const int N = 1e5+2;
vector<int> vande[N];

int visited[N] = {0};

vector<int> l,m;

int dist[N] = {0};

void bfs(int person, int node, int totalNodes)
{
    list<int> queue;
    visited[node] = 1;
    queue.push_back(node);

    while(!queue.empty())
    {
        l.push_back(queue.front());
        queue.pop_front();
        for(int i = 0; i < vande[node].size(); i++)
        {
            if(visited[vande[node][i]] == 0)
            {
                visited[vande[node][i]] = 1;
                dist[vande[node][i]] = dist[node]+1;
                queue.push_back(vande[node][i]);
            }
        }
    }
}

void dfa(int person, int node, int totalNodes)
{
    visited[node] = 1;

    if(person == 0)
    {
        l.push_back(node);
    }else
    {
        m.push_back(node);
    }
    

    for(int i = 0; i < vande[node].size(); i++)
    {
        if(visited[vande[node][i]] == 0)
        {
            dfa(person,vande[node][i],totalNodes);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int tc; cin >> tc;
    while(tc--)
    {
        l.clear();
        m.clear();
        int n, a, b;cin >> n >> a >> b;
        int v = n;
        while(v--)
        {
            int x,y; cin >> x >> y;
            vande[x].push_back(y);
            vande[y].push_back(x);
        }

        // for(int i=0;i<=n;i++)
        // {
        //     cout << "node: "<< i << " Edge: ";
        //     for(int j = 0; j<vande[i].size(); j++)
        //     {
        //         cout << vande[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        

        bfs(0,a, n);

        for(int i = 0; i < 1e5+2; i++)
        {
            visited[i] = 0;
        } 

        dfa(1,b, n);

        for(int i = 0; i < 1e5+2; i++)
        {
            visited[i] = 0;
        } 

        for(int i = 0; i< l.size(); i++)
        {
            cout << l[i] << " ";
        }
        cout << endl;
        for(int i = 0; i< n; i++)
        {
            cout << dist[i] << " ";
        }
        cout<<endl;
        for(int i = 0; i< m.size(); i++)
        {
            cout << m[i] << " ";
        }

        cout << endl;
    }

    return 0;
}