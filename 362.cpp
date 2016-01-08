//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

bool vis[12][12];
int dir[4][2] = {{1,0},{0,-1},{-1,0},{0,1}};
char res[4] = {'D','L','U','R'};
int n,m;

void dfs(int x,int y)
{
    vis[x][y] = 1;
    for (int i = 0 ; i < 4 ; i++)
    {
        int newx = x + dir[i][0];
        int newy = y + dir[i][1];
        if (newx<=n && newx>=1 && newy<=m && newy>=1 && !vis[newx][newy])
        {
            cout<<res[i];
            dfs(newx,newy);
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int stx,sty;
    cin>>n>>m>>stx>>sty;
    dfs(stx,sty);
    cout<<endl;
    return 0;
}
