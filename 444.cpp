//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (int i=begin;i<=end;++i)
#define rep(i,t) for (int i=0;i<t;++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

int mark[1000010];
int main()
{
    ios::sync_with_stdio(false);
	int x,y;
	cin >> x >> y;
	x %= y;
	for (int pos = 0 ; ; )
	{
		//cout << "x = " << x << endl;
		if (x == 0)
		{
			cout << pos << " 0" << endl;
			break;
		}
		if (mark[x])
		{
			cout << mark[x]-1 << " " << pos - mark[x] + 1 << endl;
			break;
		}
		mark[x] = pos+1;
		x = (x * 10) % y;
		pos++;
	}    
    return 0;
}
