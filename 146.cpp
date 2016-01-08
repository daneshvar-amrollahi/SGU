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
	double l;
	cin>>l;
	int n,L = round(l*10000);
	cin>>n;
	ll res = 0;
	rep(i,n)
	{
		ll t,v;
		cin>>t>>v;
		res = (res+v*t*10000)%L;
	} 
	if (res<0)
		res+=L;
	
	if (2 * res > L)
		res = L-res;
	cout<<fixed<<setprecision(4)<<((double)res/10000.0)<<endl;
    return 0;
}
