//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long ll;
typedef pair <int,int> pii;

char a[110][110];
int main()
{
    ios::sync_with_stdio(false);
    int n,m;    
    cin >> n >> m;
    for (int i = 0 ; i < 110 ; i++) 
        for (int j = 0 ; j < 110 ; j++) 
            a[i][j] = '#';

    int r,c;
    for (int i = 1 ; i <= n ; i++)
        for (int j = 1 ; j <= m ; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'P')
            {
                r = i;
                c = j;
                a[i][j] = '.';
            }
        }

    for (int i = 1 ; i <= m ; i++)
        a[n+1][i] = '.';

    enum {left , right , down} dir = down;
    while (r < n+1)
    {
        if (a[r][c] == '#')
        {
            c = -1;
            break;
        }
        if (a[r][c] == '.')
        {
            r++;
            dir = down;
        }
        else
        if (a[r][c] == '/')
        {
            if (dir == right)
            {
                c = -1;
                break;
            }
            if (dir == left)
                r++ , dir = down;
            else //dir == down
                c-- , dir = left;
        }
        else
        if (a[r][c] == '\\')
        {
            if (dir == left)
            {
                c = -1;
                break;
            }
            if (dir == right)
                r++ , dir = down;
            else //dir == down
                c++ , dir = right;
        }
    }
    cout << c << endl; 
    return 0;
}
