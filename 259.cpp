//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;++i)
#define rep(i,t) for (ll i=0;i<t;++i)
#define pb push_back
#define mp make_pair
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    pair <int,int> a[100010];
    cin>>n;
    rep(i,n)
        cin>>a[i].second; //time
    rep(i,n)
        cin>>a[i].first; //deliver

    sort(a,a+n,greater<pair <int,int> >());
    
    int t = 0; //used time
    int res = 0;
    rep(i,n)
    {
        t += a[i].second; //print it
        res = max(res,t+a[i].first); //have we already saved time or not
    }
    cout<<res<<endl;
    return 0;
}
