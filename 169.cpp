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
    cin>>n;
    if (n==1)
        return cout<<8 , 0;
    n--;
    int res = 1;
    if (n%3==0)
        res+=2;
    if (n%6==0)
        res++;
    cout << res << endl;
    return 0;
}
