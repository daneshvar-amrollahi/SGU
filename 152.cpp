//Bismillah
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (ll i=a;i<=b;i++)
#define rep(i,n) for (ll i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[10010],r[10010],res[10010]; //r[i]: baghimoonde
    cin>>n;
    ll s = 0;
    rep(i,n)
        cin>>a[i] , s+=a[i];
    ll tot = 100;
    rep(i,n)
    {
        res[i] = (a[i]*100)/s;
        r[i] = (a[i]*100)%s;
        tot-=res[i];
    }
    rep(i,n)
    {
        if (!tot)
            break;
        if (r[i])
        {
            res[i]++;
            tot--;
        }
    }
    rep(i,n)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;   
}
