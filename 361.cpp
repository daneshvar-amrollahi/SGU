//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (int i=begin;i<=end;++i)
#define rep(i,t) for (int i=0;i<t;++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

char a[210][210];
int main()
{
    ios_base::sync_with_stdio(false);
	//rang amizi: ghotri # bezar
	int n,m;
	cin >> n >> m;
	rep(i,n)
		rep(j,m)
			if ( (i+j+1)%3==0 )
				a[i][j] = '#';
			else
				a[i][j] = '0';
	rep(i,n)
	{
		rep(j,m)
			cout << a[i][j];
		cout << endl;
	}
    return 0;
}   
