//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (int i=begin;i<=end;++i)
#define rep(i,t) for (int i=0;i<t;++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;

long double x,y,r;
long double PI = 3.14159265358979323846;
int main()
{
    ios_base::sync_with_stdio(false);
	cin >> x >> y >> r;
	//mass = volume * densitiy
	r = r*r*PI * log(x*x + y*y);
	cout << fixed << setprecision(12) << r << endl;
    return 0;
}   
