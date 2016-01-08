#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (int i=begin;i<=end;++i)
#define pb push_back
typedef long long ll;

bool ispr(int n)
{
    if (n==1)
        return 0;
    if (n==2)
        return 1;
    if (n%2==0)
        return 0;
    for (int i = 3 ; i * i <= n ; i+=2)
        if (n%i==0)
            return 0;
    return 1;
}

int dp[10010]; //dp[i]: kamtarin tedad adade super prime baraye sakhte jame i
int par[10010];

int main()
{
    ios_base::sync_with_stdio(false);
    vector <int> v;
    int ind = 0;
    FOR(i,1,10000)
    {
        if (ispr(i))
            ind++;
        if (ispr(i) && ispr(ind))
            v.pb(i);
    }

    int n;
    cin >> n;

    for (int i = 0 ; i < 10010 ; i++)
        dp[i] = (1e9+5);

    dp[0] = 0;
    FOR(i,1,n) 
    {
        for (int j = 0 ; j < v.size() && ( (i-v[j]) >= 0 ) ; j++) //mikhahim i ro besazim
        {
            if ( (dp[i-v[j]]+1 < dp[i]) && (dp[i-v[j]] < 1e9+5) ) //i ro az rooye i-v[j] besaz (yedoone v[j] behesh bede)
            {
                dp[i] = dp[i-v[j]]+1;
                par[i] = i-v[j];
            }
        }
    }
    if (dp[n]==1e9+5)
        return cout<<0 , 0;
    cout << dp[n] << endl;
    vector <int> res;
    while (n > 0)
    {
        res.pb(n-par[n]);
        n = par[n];    
    } 
    sort(res.begin() , res.end(),greater <int> ());
    for (int i = 0 ; i < res.size() ; i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}
