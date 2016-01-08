//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
int res[110];
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    rep(i,m)
    {
    	int a,b;
    	cin>>a>>b;
    	rep(j,n)
    	{
	 		int x,y;
	  		cin>>x>>y;
	  		if( (a>b && x>y) || (a==b && x==y) || (a<b && x<y)) //guess the winner
	    		res[j]+=2;
	  		if( (a-b) == (x-y) )
	    		res[j]+=3;
	  		if(a==x)
	    		res[j]++;
	  		if(b==y)
	    		res[j]++;
    	}
    }
    rep(i,n)
    	cout<<res[i]<<" ";
    return 0;
}
