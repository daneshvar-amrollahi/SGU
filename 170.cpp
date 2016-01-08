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
	string s1,s2;
	cin>>s1>>s2;
	if (s1.size()!=s2.size())
		return cout<<-1 , 0;
	int tmp = 0;
	rep(i,s1.size())
		tmp+=(s1[i]=='+') , tmp-=(s2[i]=='+');
	
	if (tmp!=0)
		return cout<<-1 , 0;

	int n = s1.size();
	int res = 0;
	for (int i = n-1 ; i>=0 ; i--)
	{
		if (s1[i]==s2[i])
			continue;
		int j = i-1;
		int sw = 0;
		//cout<<"i = "<<i<<endl;
		for (j ; j >=0 ; j--)
			if (s1[j]==s2[i])
				break;	
		//cout<<"j = "<<j<<endl;
		while (j<i)
			swap(s1[j],s1[j+1]) , j++ , sw++;
		//cout<<"sw = "<<sw<<endl;
		//cout<<"str = "<<s1<<endl;
		//cout<<endl;
		res+=sw;
	}
	//cout<<s1<<endl;
	cout << res << endl;
    return 0;
}
