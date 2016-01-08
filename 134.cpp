//Bismillah
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

const int maxN = 16000 + 10;
int n;
vector <int> adj[maxN];
bool vis[maxN];
int dp[maxN]; //dp[i]: number of childs of i
vector <int> value[maxN];
int num[maxN]; //number written on vertex i after deleting it
int res = 1e9;

void dfs(int u)
{
    //cout << u << " , ";
    vis[u] = true;
    int mx = -1; //writing number on vertex u
    dp[u] = 1;

    for (int i = 0 ; i < adj[u].size() ; i++)
    {
        int w = adj[u][i];
        if (vis[w])
            continue;
            dfs(w);
        dp[u] += dp[w]; //childs of u
        //cout << "dp[w] = " << dp[w] << endl;
        //cout <<"mx = " << mx << endl;
        mx = max(mx , dp[w]);
        //cout << "mx = " << mx << endl;
    }
     //cout<<"here"<<endl;
     //cout << "mx = " << mx << endl;
     //cout << "n-d[u] = " << n-dp[u] << endl;
    mx = max(mx , n - dp[u]); //first component , second component
    num[u] = mx;
    //cout << "mx = " << mx << endl;
    res = min(res , mx);
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1 ; i < n ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);
    

    vector <int> ans;
    for (int i = 1 ; i <= n ; i++)
    {
        if (num[i] == res)
            ans.push_back(i);
    }
    cout << res << " " << ans.size() << endl;
    for (int i = 0 ; i < ans.size() ; i++)
        cout << ans[i] << endl;
    return 0;
}
