//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
map <int,int> deg;
int main()
{
    ios_base::sync_with_stdio(false);
    
    int n,m;
    cin>>n>>m;
    rep(i,m)
    {
    	int x,y;
    	cin>>x>>y;
    	deg[x]++;
    	deg[y]++;
    }
    ll res = 0;
    FOR(i,1,n)
    	res+=deg[i]*deg[i];
    cout<<res<<endl;
    return 0;
}
