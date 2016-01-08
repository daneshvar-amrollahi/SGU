//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

int a[110],x,y,n;
int main()
{
    ios::sync_with_stdio(false);
    cin >> x >> y;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];
    //b: boys in , g: girls in
    //x: boys out , y: girls out
    int b = 0 , g = y;
    y = 0;
    vector < pii > res;
    for (int i = 0 ; i < n ; i++)
    {
        int curB = b , curG = g;
        //cout << b << " " << g << endl;
        if (b + g == a[i])
        {
            res.pb(mp(0,0));
        }
        else
        if (b + g < a[i])
        { //boys must join
            int need = a[i] - (b + g);
            if (need > x) //need > have
                return cout << "ERROR" << endl , 0;
            b += need;
            x -= need;
            res.pb(mp(b-curB,0));
        }
        else
        if (b + g > a[i])
        {
            //cout << "girls must leave" << endl;
            int dif = b + g - a[i];
            if (dif > g)
                return cout << "ERROR" << endl , 0; 
            g -= dif;
            res.pb(mp(0,curG-g));
        }
    }
    
    for (int i = 0 ; i < res.size() ; i++)
        cout << res[i].first << " " << res[i].second << endl;
    return 0;
}
