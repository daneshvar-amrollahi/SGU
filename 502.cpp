//Bismillah
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (ll i=a;i<=b;i++)
#define rep(i,n) for (ll i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

int n,a[10];

void dfs(int pos,ll sum)
{
    if (pos==n)
    {
        if (sum%17==0)
        {
            cout << sum << endl;
            exit(0);    
        }   
    }   
    for (int i=0;i<10;i++)
    {
        if (i==0 && pos==0) //raghame avval na sefre
            continue;
        if (a[i])
        {
            a[i]--;
            dfs(pos+1 , sum*10 + i);
            a[i]++;
        }
    }
} 

int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    n = s.size();
    rep(i,s.size())
        a[s[i]-'0']++;
    dfs(0,0LL); //length 0, sum 0
    cout<<-1<<endl; 
    return 0;   
}
