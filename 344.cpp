//Bismillah
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (ll i=a;i<=b;i++)
#define rep(i,n) for (ll i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

int d[1010][1010]; //tedade hamsaye haye harze har khoone
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    queue < pair<int,int> > q;
    rep(i,n)
        rep(j,m)
        {
            char c;
            cin>>c;
            if (c=='X')
                d[i][j] = 2 , q.push(mp(i,j));
        }    
    int res = 0;
    while (!q.empty()) //BFS
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        res++;
        for (int z1 = -1 ; z1 <= 1 ; z1++)
            for (int z2 = -1 ; z2 <= 1 ; z2++)
            {
                if (abs(z1)+abs(z2)!=1)
                    continue;
                int xx = x+z1 , yy = y+z2;
                if (xx>=0 && n>xx && yy>=0 && m>yy)
                    if (d[xx][yy]<2)
                    {
                        d[xx][yy]++;
                        if (d[xx][yy]==2)
                            q.push(mp(xx,yy));
                    }
                    
            }
    }
    cout << res << endl;
	return 0;   
}
