//Bismillah

#include <bits/stdc++.h>
using namespace std; 

#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair

typedef long long ll;

int n,m;
vector <int> v[210];
bool vis[210];
bool col[210];

int res = 0;
vector <int> ans;

bool dfs(int u,int c)
{
    vis[u] = true;
    col[u] = c;
    if (c==1)
    {
        res++;
        ans.pb(u);
    }
    rep(i,v[u].size())
    {
        int w = v[u][i];
        if (!vis[w])
        {
            bool check = dfs(w,1-c);
            if (!check)
                return false;
        }

        if (col[w]==c) //2 hamsaye hamrang
            return false;
    }
    return true;
}

int main()

{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;

    rep(i,m)
    {
        int x,y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }

    FOR(i,1,n)
    {
        if (!vis[i])
        {
            bool check = dfs(i,1);
            if (!check)
                return cout<<"no" , 0;
        }

    }

    cout<<"yes"<<endl;

    cout << res << endl;
    for (int i = 0 ; i < ans.size() ; i++)
        cout << ans[i] << " ";
    return 0;

}
