//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    vector < pair<int,int> > v;
    cin >> n;
    ll tp = 0; //total population
    rep(i,n)
    {
        int x,p;
        cin >> x >> p;
        tp+=p;
        v.pb(mp(x,p));
    }
    sort(v.begin(),v.end()); // bar asase mokhtasat

    ll s = 0;
    rep(i,n)
    {
        s+=v[i].second;
        if ( 2*s >= tp ) //haddeaghal nesfe jamiate shahr
        {
            double res = v[i].first;
            cout << fixed << setprecision(5) << res << endl;
            return 0;
        }   
    }
    return 0;
}
