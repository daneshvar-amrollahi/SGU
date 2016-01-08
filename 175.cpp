//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;

int solve(int n,int q)
{
	//cout<<n<<" "<<q<<endl;
	//n: raste baze (toole baze)
	if (n==1)
		return 1;
	int k = n / 2;
	if (q > k)
		return solve( n-k , n-q+1); 
	else
		return solve( k , k-q+1 ) + (n-k);  //chon miofte samte rast amma ma faghat koochik mikonim --> + (n-k)
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n,q;
    cin >> n >> q;
    int ans = solve(n,q);
    cout << endl;
    cout << ans << endl;
    return 0;
}
