//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (int i=begin;i<=end;i++)
#define rep(i,t) for (int i=0;i<t;i++)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

vector <int> x,y;

vector <int> mult(const vector<int>& aa, int b)
{
    vector<int> a = aa;
    for(int i=0;i<a.size();i++)
        a[i]*=b;
    int last = 0;
    for(int i=0;i<a.size();i++)
    {
        a[i]+=last;
        last = a[i]/10;
        a[i] %= 10;
    }
    while(last)
    {
        a.push_back(last%10);
        last/=10;
    }
    return a;
}

vector<int> sum(const vector<int>& a,const vector<int>& b)
{
    vector<int> result(max(a.size(),b.size()));
    for(int i=0;i<result.size();i++)
        result[i] = ((i<a.size())?a[i]:0)+((i<b.size())?b[i]:0);
    int last = 0;
    for(int i=0;i<result.size();i++)
    {
        result[i] += last;
        last = result[i]/10;
        result[i] %= 10;
    }
    while(last)
    {
        result.push_back(last%10);
        last /= 10;
    }
    return result;
}

/*
dp[i][0] += dp[i-1][1];  
dp[i][1] += n*d[i-1][0] + 2*(dp[i-1][1]);  

*/

int main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    x.pb(1); //akhari markaz
    y.pb(0); //akhari shahre joz markaz
    FOR(i,1,m)
    {
        vector <int> tmp = x;
        x = mult(y,n); 
        y = mult(y,2);
        y = sum(y,tmp);
    }
    for (int i = x.size()-1 ; i >= 0 ; i--)
        cout << x[i];
    cout << endl;
    return 0;
}
