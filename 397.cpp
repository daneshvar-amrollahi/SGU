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
    string s;
    list <char> word;  
    cin >> s;
    int i;  
    int n = s.size(); 
    list <char> :: iterator it = word.begin();  
    rep(i,n) 
    {  
		if (s[i] == 'L') 
		{  
	    	if (it != word.begin()) 
	    		it--;
	    	continue;
	    }
	 	else 
	 	if (s[i] == 'R') 
	 	{  
	    	if (it != word.end())  
				it++;
			continue;  
	    }  
		
	    word.insert(it,s[i]);  
	}  

    for (it = word.begin(); it != word.end(); it++) 
    	cout<<*it;
    cout<<endl;
    return 0;
}
