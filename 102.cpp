//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
int gcd(int a,int b)
{
    return (b==0 ? a : gcd(b,a%b));
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n , res = 0;
    cin>>n;
    FOR(i,1,n)
        if (gcd(i,n)==1)
            res++;
    cout << res <<endl;
    return 0;
}
