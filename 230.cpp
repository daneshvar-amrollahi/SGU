#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

const int maxN = 100 + 10;
vector <int> adj[maxN];
int n,m,mark[maxN],w[maxN];
bool cycle;
vector <int> res;

void dfs(int v)
{
    mark[v] = 1;
    for (int i = 0; i < adj[v].size(); i++)
    {
        int u = adj[v][i];
        if (mark[u] == 1)
            cycle = true;
        if (!mark[u])
            dfs(u);
    }
    mark[v] = 2;
}

void fix_ans(int v)
{
    for (int i = 0; i < adj[v].size(); i++)
    {
        int u = adj[v][i];
        if (w[v] > w[u])
            swap(w[v], w[u]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin >> n >> m; 
    for (int i = 0 ; i < m ; i++)
    {
        int v,u;
        cin >> v >> u;
        adj[v].pb(u);
    }   

    for (int i = 1 ; i <= n ; i++)
        w[i] = i;

    for (int i = 1 ; i <= n ; i++)
        if (!mark[i])
            dfs(i);

    if (cycle)
        return cout << "No solution" << endl , 0;

    for (int j = 0 ; j < 110 ; j++)
        for (int i = 1 ; i <= n ; i++)
            fix_ans(i);
    
    for (int i = 1 ; i <= n ; i++)
        cout << w[i] << " ";
    cout << endl;
    return 0;
}
