//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
ll k,f[45];
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>k;
    f[1] = 1;
    f[2] = 1;
    FOR(i,3,k)
    	f[i] = f[i-1]+f[i-2];
    ll res = 0;
    FOR(i,0,k)
    	res+=f[i];
    cout<<res;
    return 0;
}
