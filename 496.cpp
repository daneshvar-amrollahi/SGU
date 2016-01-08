//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

vector < pair < pii , pii > > v;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        v.pb( mp( mp(x1,y1) , mp(x2,y2) ) );
    }
    int res = 0;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i + 1 ; j < n ; j++)
        {
            int x1 = v[i].first.first , y1 = v[i].first.second;
            int x2 = v[i].second.first , y2 = v[i].second.second;
            int xx1 = v[j].first.first , yy1 = v[j].first.second;
            int xx2 = v[j].second.first , yy2 = v[j].second.second;
            if ( (x1 == xx1 && y1 == yy1) || (x1 == xx2 && y1 == yy2) || (x2 == xx1 && y2 == yy1) || (x2 == xx2 && y2 == yy2)) 
            {
                int tmp1 = x2 - x1 , tmp2 = y2 - y1;
                int tmp3 = xx2 - xx1 , tmp4 = yy2 - yy1;
                if (tmp1 * tmp3 + tmp2 * tmp4 == 0) ++ res;
            }
        }
    }
    cout << res << endl;
    return 0;
}
