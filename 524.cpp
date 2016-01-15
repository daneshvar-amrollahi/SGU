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

int n;
double a[410],b[410],res[410];
double ans = (double)1e9;

int main() 
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    FOR(i,1,n)  
        cin >> a[i];
    FOR(i,1,n)
    {
        FOR(j,i+1,n)
        {
            double dist = (a[j] - a[i]) / (double)(j - i);
            int x = 0;
            for (int k = i ; k >= 1 ; k--)
                b[k] = a[i] - x*dist , x++;
            x = 1;
            FOR(k,i+1,n)
                b[k] = a[i] + x*dist , x++;

            double cur = 0;
            FOR(k,1,n)
                cur += fabs(b[k]-a[k]);
            if (cur < ans)
            {
                ans = cur;
                FOR(k,1,n)
                    res[k] = b[k];
            }
        }
    }

    cout << fixed << setprecision(4) << ans << endl;
    cout << fixed << setprecision(10);
    FOR(i,1,n)
        cout << res[i] << " ";
    cout << endl; 
    return 0;
}
