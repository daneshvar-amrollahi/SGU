//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

int mat[10][10],deg[10],n;
pii domino[1010];
vector <pii> path;

void dfs(int u)
{
    //cout << u << " , ";
    for (int i = 0 ; i <= 6 ; i++)
    {
        if (mat[u][i])
        {
            mat[u][i]--;
            mat[i][u]--;
            dfs(i);
            path.pb(mp(u,i));
            
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int x,y;
        cin >> x >> y;
        mat[x][y]++;
        mat[y][x]++;
        deg[x]++;
        deg[y]++;
        domino[i].first = x;
        domino[i].second = y;
    }
    int odd = 0,start = 0;

    for (int i = 0 ; i <= 6 ; i++)
        if (deg[i])
            start = i;

    for (int i = 0 ; i <= 6 ; i++)
    {
        if (deg[i] % 2)
        {
            odd++;
            start = i;
        }
    }
    if (odd != 0 && odd != 2)
        return cout << "No solution" << endl , 0;
    dfs(start);
    if (path.size() != n)
        return cout << "No solution" << endl , 0;

    for (int i = path.size()-1 ; i >= 0 ; i--)
    {
        for (int j = 0 ; j < n ; j++)
        {
            if (path[i].first == domino[j].first && path[i].second == domino[j].second)
            {
                cout << j+1 << " +" << endl;
                domino[j].first = domino[j].second = -1;
                break;
            }
            else
            if (path[i].first == domino[j].second && path[i].second == domino[j].first)
            {
                cout << j+1 << " -" << endl;
                domino[j].first = domino[j].second = -1;
                break;
            }
        }
    }
    return 0; 
}
