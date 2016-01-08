//Bismillah
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (ll i=a;i<=b;i++)
#define rep(i,n) for (ll i=0;i<n;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
int main()
{
	ios_base::sync_with_stdio(false);
	ll a,b,res;
	cin>>a>>b;
	if (a==0 || b==0)
		return cout<<0 , 0;
	for (res = 1 ; res < 1e7 ; res++)
	{
		
		if (a==b)
		{
			cout<<res<<endl;
			return 0;
		}
		if (a<b)
		{
			b-=a;
			a*=2;
		}
		else
		{
			a-=b;
			b*=2;
		}
	}
	cout<<-1;
	return 0;	
}
