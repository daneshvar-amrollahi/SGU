//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

const int maxN = 200 + 10;
const int maxX = 1e4 + 10;
int a[maxN],x,n;
bool dp[maxX];

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> x;
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a,a+n);
    vector <int> res;

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < maxN ; j++)
            dp[j] = 0;
        dp[0] = 1;
        for (int j = 0 ; j < n ; j++)
        {
            if (i == j)
                continue;
            
            for (int k = x-a[j] ; k >= 0 ; k--)
                if (dp[k])
                    dp[k+a[j]] = 1;
            
        }

        if (!dp[x])
            res.pb(a[i]);
    }
    cout << res.size() << endl;
    for (int i = 0 ; i < res.size() ; i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}
