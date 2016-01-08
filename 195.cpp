//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

const int maxN = 5e5 + 10;
int par[maxN];
bool mark[maxN];

int main()
{
    ios::sync_with_stdio(false);
    int n;
    par[1] = 0;
    cin >> n;
    for (int i = 2 ; i <= n ; i++)
        cin >> par[i];

    vector <int> res;
    for (int i = n ; i > 1 ; i--) //each programmer has a number greater than his chief
        if (!mark[par[i]] && !mark[i])
        {
            mark[par[i]] = 1;
            res.pb(i);
        }

    cout << res.size() * 1000 << endl;
    sort(res.begin(),res.end());
    for (int i = 0 ; i < res.size() ; i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}
