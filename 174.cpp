//Bismillah
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef pair <int,int> pii;

const int maxN = 2*(200000) + 10;
map < pii , int > m;
int par[maxN];
int h[maxN];

int find_root(int x)
{
    if (x == par[x])
        return x;
    else
        par[x] = find_root(par[x]);
    return par[x];
}

void merge(int x,int y)
{
    par[find_root(x)] = find_root(y);
}

int main()
{
    ios::sync_with_stdio(0);
    int n , num = 0;

    for (int i = 0 ; i < maxN ; i++)
        par[i] = i;

    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        pii p1,p2;
        cin >> p1.first >> p1.second >> p2.first >> p2.second;
        if (!m.count(p1))
            m[p1] = num++;
        if (!m.count(p2))
            m[p2] = num++;
        //be raas ha shomare nesbat bede
        if (find_root(m[p1]) == find_root(m[p2]))
            return cout << i+1 << endl , 0;
        merge(m[p1],m[p2]);
    }    
    cout << 0 << endl;
    return 0;
}
