//Bismillah
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
int a[110][110];
ll res = 0;
int main()
{
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	FOR(i,1,n)
		FOR(j,1,m)
		{
			char c;
			cin>>c;
			a[i][j] = c-'0';
		}
	FOR(i,1,n)
		FOR(j,1,m)
		{
			if (a[i][j]==0)
				continue;
			res+=max(a[i][j]-a[i-1][j],0); //divare gheyre moshtarek
			res+=max(a[i][j]-a[i+1][j],0);
			res+=max(a[i][j]-a[i][j-1],0);
			res+=max(a[i][j]-a[i][j+1],0);
			res+=2; //saro tah ke mojavere havast
		}
	cout<<res;
	return 0;
}
