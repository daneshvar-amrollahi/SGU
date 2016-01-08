//Bismillah
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
int cnt[1000010];
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int a;
        cin >> a;
        cnt[a]++;
    }

    for (int i = 1000000 ; i >= 1 ; i--)
    {
        int t = 0;
        for (int j = i ; j <= 1000000 ; j+=i)
        {
            if (cnt[j])
                t++;
        }
        if (t > 1)
        {
            return cout << i <<endl , 0;
        }
    }
    return 0;
}
