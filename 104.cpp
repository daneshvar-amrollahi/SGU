#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (int i=begin;i<=end;i++)

typedef long long ll;

int n,m;
ll a[110][110];
ll d[110][110];
int par[110][110];

void find_path(int i,int j)
{
    if (!i)
        return;

    if (par[i][j]==1)
    {
        find_path(i-1,j-1);
        cout << j << " ";
    }
    else
    if (par[i][j]==0)
        find_path(i,j-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    FOR(i,1,n)
        FOR(j,1,m)
        {
            cin >> a[i][j];
            if (i > j)
                d[i][j] = -1e9;
        }

    d[1][1] = a[1][1];
    par[1][1] = 1;
    //d[i][j] : behtarin javabe momken baraye gharar dadane i gol dar j sottone avval
    FOR(i,1,n)
        FOR(j,2,m)
        {
            if (i > j)
            {
                d[i][j] = -1e9;
                continue;
            }
            ll tmp1 = d[i-1][j-1] + a[i][j]; //gole i om ro dar goldane j om bezar
            ll tmp2 = d[i][j-1]; //nazaar
            if (tmp1>tmp2)
                par[i][j] = 1 , d[i][j] = tmp1;
            else
                par[i][j] = 0 , d[i][j] = tmp2;
        }
    cout << d[n][m] << endl;
    find_path(n,m);
    cout << endl;
    return 0;  
}
