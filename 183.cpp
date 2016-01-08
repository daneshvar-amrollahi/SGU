//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (int i=begin;i<=end;++i)
#define rep(i,t) for (int i=0;i<t;++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

const int INF = 1e9;
int n;
int d[110][110];
const int MOD = 105;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;

    //d[i][j]: behtarin javabe makhtoom be i ke avvalin rang shodeye poshtesh j ta fasele
    int res = INF;
    FOR(i,1,n)
    {
        int c;
        cin >> c;
        for (int j = i - 1; j >= 0 && j >= (i-m+1) ; j--) //FOR(j,1,m-1) d[i][j]  = INF
        {
            d[i%MOD][(i-j)%MOD] = INF;
            for (int k = j - 1; k >= 0 && k >= (i-m) ; k--) //m taye ghable i ro bebin ke makhtoom be j bashan
            {
                d[i%MOD][(i-j)%MOD] = min(d[i%MOD][(i-j)%MOD], d[j%MOD][(j-k)%MOD]);
            }
            
            if (j==0)   
                d[i%MOD][(i-j)%MOD] = 0;
            d[i%MOD][(i-j)%MOD] += c; 
            
            if (j >= n - m + 1) 
                res = min(res, d[i%MOD][(i-j)%MOD]);
            
        }     
        
    }
    int ret = INF;
    FOR(i,1,n)
        FOR(j,n-m+1,m)
            ret = min(ret , d[i%MOD][(i-j)%MOD]);
    cout << res ;
    return 0;
}
//i-(i-1) = 1
//i-(i-2) = 2
//...
//i-(i-m+1) = m - 1
