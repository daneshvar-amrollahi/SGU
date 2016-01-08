//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (int i=0;i<t;i++)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

ll c[35]; //catalan numbers
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    c[0] = 1;
    FOR(i,1,n)
    {
        FOR(j,1,i)
            c[i] += c[j-1]*c[i-j];
    }  
    cout << c[n] << " " << n+1 << endl;
    return 0;
}
