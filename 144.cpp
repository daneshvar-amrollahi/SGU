//Bismillah
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    double x,y,z;
    cin>>x>>y>>z;
    double k = (y-x)*60;
    double res = 1 - ( ((k-z)*(k-z))/(k*k) );
    cout<<fixed<<setprecision(7)<<res<<endl;
	return 0;
}
//Daneshvar

