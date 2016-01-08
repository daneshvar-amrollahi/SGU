//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

const int maxN = 200 + 10;
int d[maxN][maxN];

int main()
{
    ios::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	int k = (m+1) / 2;
	for (int i = 0 ; i < n ; i++)
		for (int j = 0 ; j < n ; j++)
		{
			int a;
			cin >> a;
			if (i == j)
				continue;
			d[i][j] = 1e9;
			if (a <= k)
				d[i][j] = 1;
		} 

	for (int k = 0 ; k < n ; k++)
		for (int i = 0 ; i < n ; i++)
			for (int j = 0 ; j < n ; j++)
				d[i][j] = min(d[i][k] + d[k][j] , d[i][j] );
	bool ok = 1;
	for (int i = 0 ; i < n ; i++)
		for (int j = 0 ; j < n ; j++)
			ok &= (d[i][j] <= 3);
	if (ok)
	{
		cout << k << endl;
		for (int i = 1 ; i <= k ; i++)
			cout << i << " ";
		cout << endl;
		return 0;
	}
	cout << m-k << endl;
	for (int i = k+1 ; i <= m ; i++)
		cout << i << " ";
	cout << endl;
    return 0;
}
