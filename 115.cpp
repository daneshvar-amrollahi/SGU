//Bismillah
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,begin,end) for (ll i=begin;i<=end;i++)
#define rep(i,t) for (ll i=0;i<t;i++)
#define pb push_back
#define mp make_pair
typedef long long ll;
int f(int a)
{
	if (a==2)
		return 28;
	if (a==4 || a==6 || a==9 || a==11 || a==12)
		return 30;
	return 31;
}


int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int day = 1,month = 1, res = 1;//1 = monday
    while (1)
    {
    	int day_end = f(month);
    	if (day==n && month==m)
    	{
    		cout<<res<<endl;
    		return 0;
		}
		day++;
		res++;
		if (res==8)
			res = 1;
		if (day==day_end+1)
		{
			day = 1;
			month++;
		}
		if (month==13)
			break;
	}
	cout<<"Impossible";
	
	return 0;
}
//Daneshvar
