//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (int i=begin;i<=end;++i)
#define rep(i,t) for (int i=0;i<t;++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

struct Node
{
	int x, d, c;
} cur,next;

Node node(int x, int d, int c)
{
	Node ret; 
	ret.x = x; 
	ret.d = d; 
	ret.c = c;
	return ret;
}

int adj[210][210] , n , m;
bool mark[210][4];
queue <Node> q;

int bfs()
{
	cur = node(0, 0, 0);
	q.push(cur);
	while (!q.empty())
	{
		cur = q.front();q.pop();
		int x = cur.x, d = cur.d + 1, c = cur.c;
		FOR(i,1,n-1)
			if (adj[x][i] != 0 && adj[x][i] != c)
			{
				if (!mark[i][adj[x][i]])
				{
					if (i == n - 1)
						return d;
					mark[i][adj[x][i]] = true;
					next = node(i, d, adj[x][i]);
					q.push(next);
				}
			}
	}
	return -1;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	rep(i,m)
	{
		int u,v,c;
		cin >> u >> v >> c;
		u--;
		v--;
		adj[u][v] = c;
		
	}

	cout << bfs() << endl;

	return 0;
}   
