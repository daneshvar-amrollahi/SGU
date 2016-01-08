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
    pair <int,int> a[20000];
    cin>>n;
    FOR(i,1,n)
    	cin>>a[i].first>>a[i].second; //(x,y)
    sort(a+1,a+n+1);
    int res = 0;
    cout<<endl<<endl;
    FOR(i,1,n)
        cout<<a[i].first<<" "<<a[i].second<<endl;
    cout<<endl;
    int temp = a[1].second; //raste bazeye avval
    
    FOR(i,2,n)
    	if (a[i].second<temp) // and a[i].first>=chape bazeye temp --> temp bazeye i ro mipooshoone
    		res++;
    	else
    		temp = a[i].second; //bazeye i om too hichkodoom az ghablia shamel nemishe
    cout<<res<<endl;
    return 0;
}
