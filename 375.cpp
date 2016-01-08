//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
bool can = 0;
vector <int> v;
vector < vector <int> > found;
void dfs(int now,int want)
{
	if (now==want)
	{
		can = 1;
		found.pb(v);
		return;
	}
	if (now>want)
		return;

	v.pb(2);
	dfs(2*now+1,want);
	v.resize(v.size()-1);
	
	if (2*now-1>1)
	{
		v.pb(1);
		dfs(2*now-1,want);
		v.resize(v.size()-1);
	}

}

int main()
{
    ios_base::sync_with_stdio(false);
    int x;
    cin>>x;
	v.clear();
	found.clear();
	if (x==1)
		return cout<<0 , 0;
	dfs(1,x); //have , want
	if (can)
	{
		vector <int> res;
		int mi = 1e8+10;
		//cout<<"found.size() = "<<found.size()<<endl;
		rep(i,found.size())
			if (found[i].size()<mi)
			{
				mi = found[i].size();
				res = found[i];
			}
		cout<<res.size()<<endl;
		rep(i,res.size())
			cout<<res[i]<<" ";
		cout<<endl;
		return 0;
	}
	cout<<"No solution"<<endl;
	
    return 0;
}
