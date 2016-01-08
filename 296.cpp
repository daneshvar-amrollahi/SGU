//Bismillah
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    
    string s;
    int k;
    cin>>s>>k;
    string res = "";
    char ma = '0'-1;
    int pos;
    int pick = s.size()-k;
    for (int i=0;i<s.size() && i<=k;i++)
    {
        if (s[i]>ma)
            ma = s[i] , pos = i;
    }
    res+=ma;
    pos++;
    k--;
    pick--;
    while (pick)
    {
        int ind = pos;
        ma = s[pos];
        for (int j=pos;j<s.size();j++)
        {
        	if (pick>(s.size()-j))
        		break;
            if (s[j]>ma)
            {
                ma = s[j];
                ind = j;
            }
        }
        res+=ma;
        pick--;
        k--;
        pos = ind+1;
    }
    cout<<res;
    return 0;
}
