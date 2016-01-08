#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define pb push_back
#define mp make_pair

const int maxN = 16000 + 10;
int n;
vector <int> adj[maxN];
int d[maxN],a[maxN];
bool vis[maxN];
//d[v]: max masir ye sare masir rase v bashe bere too zirderakhtesh

void dfs(int par,int v)
{
    d[v] = a[v];
    vis[v] = true;
    for (int i = 0 ; i < adj[v].size() ; i++)
    {
        int u = adj[v][i];
        if (!vis[u])
        {
            dfs(v,u);
            d[v] = max(d[v] , d[v] + d[u]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
        cin >> a[i];
    for (int i = 1 ; i < n ; i++)
    {
        int v,u;
        cin >> v >> u;
        adj[v].pb(u);
        adj[u].pb(v);
    }
    dfs(-1,1);
    //return 0;
    int res = -1e9;
    for (int i = 1 ; i <= n ; i++)
        res = max(res , d[i]);
    cout << res << endl;
    return 0; 
}
