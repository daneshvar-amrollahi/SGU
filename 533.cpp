//Bismillah
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n < 30)
	{
		if (n!=21) //1+2+3+4+5+6
			cout << -1 << endl;
		else
			cout << 1 << endl;
		return 0;
	}	
	int q = n/14; //14 = 2+3+4+5
	n%=14;
	if (n>=2 && n<=12)
		cout << q << endl;
	else
		cout << -1 << endl;

    return 0;
}
