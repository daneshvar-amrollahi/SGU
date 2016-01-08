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

int main()
{
    ios::sync_with_stdio(false);
    int n,t1,t2;
    cin >> n >> t1 >> t2;
    int m = 0,f = 0;
    if (t1 > t2)
    	swap(t1,t2);
    for (bool f1 = 1 , f2 = 1 ; f1 || f2 ; ) //
    {
    	f++;
    	if (f1 && (f % t1) == 0) //f1 hanooz kaar dare
    		m++;
    	if (f2 && (f % t2) == 0) //f2 hanooz kaar dare
    		m++;
    	if (f1 && (f % t1) == 0	&& m >= n)
    		f1 = false;
    	if (f2 && (f % t2) == 0 && m >= n)
    		f2 = false;
    }
    cout << m << " " << f << endl;
    return 0;
}
