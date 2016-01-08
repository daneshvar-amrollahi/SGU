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

int n,m;
vector <int> seq[20];
int mark[110];

int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0 ; i < n ; i++)
    {
        int k;
        cin >> k;
        for (int j = 0 ; j < k ; j++)
        {
            int x;
            cin >> x;
            seq[i].pb(x);
        }
    }    

    for (int q = 0 ; q < m ; q++)
    {
        int l;
        cin >> l;
        for (int i = 0 ; i < 110 ; i++)
            mark[i] = 0;

        vector <int> v;
        for (int i = 0 ; i < l ; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
                mark[-x] = 1; //nabayad bashe
            if (x > 0)
            {
                v.pb(x);
                mark[x] = 2; //bayad bashe
            }
        }
        vector <int> ans;
        for (int i = 0 ; i < n ; i++)
        {
            bool ok = true;

            for (int j = 0 ; j < seq[i].size() ; j++)
            {
                int cur = seq[i][j];
                if (mark[cur] == 1)
                    ok = false;
            }

            if (!ok)
                continue;
            
            for (int j = 0 ; j < v.size() ; j++)
            {
                bool has = 0;
                for (int p = 0 ; p < seq[i].size() ; p++)
                {
                    if (v[j] == seq[i][p])
                        has = true;
                }
                if (!has)
                    ok = false;
            }

            if (ok)
                ans.pb(i);
        }

        cout << ans.size() << endl;
        for (int i = 0 ; i < ans.size() ; i++)
        {
            int cur = ans[i];
            cout << seq[cur].size() << " ";
            for (int j = 0 ; j < seq[cur].size() ; j++)
                cout << seq[cur][j] << " ";
            cout << endl;
        }

    }
    return 0;
}
