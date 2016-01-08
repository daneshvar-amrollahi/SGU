//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    if (n < 9)
    {
    	return cout << 0 , 0;
    }
    if (n == 9)
    {
    	return cout << 8 , 0;
    }
    //9 * 8 * 10^(n-10)
    //8 halat baryae 9 raghame akhar (bala bedast ovordim)
    //9 halat raghame chap (gheyre 0 bashad)
    //baghie 10 halat (harchi khastan bashan)
    cout << 72;
    rep(i,n-10) //ragham haye joz 9 raghame akhar va chaptarin
    	cout << 0;
    cout << endl;
    return 0;
}
