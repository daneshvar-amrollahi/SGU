//Bismillah
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (ll i=a;i<=b;i++)
#define rep(i,n) for (ll i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;


bool cmp(string a,string b)
{
	string ab = a+b;
	string ba = b+a;
	return ab<ba;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    string s[110];
    cin>>n;
    rep(i,n)
    	cin>>s[i];
    sort(s,s+n,cmp);
    string res = "";
    rep(i,n)
    	res+=s[i];
    cout<<res<<endl;
	return 0;   
}
