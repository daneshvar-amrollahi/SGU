#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b;
    string s;
    cin>>n>>a>>b>>s;
    if (a+b>n)
        return cout<<-1 , 0;

    string str = s;
    int t0 = 0 , t1 = 0;

    for (int i=0;i<s.size();i++)
        t0+=(s[i]=='0') , t1+=(s[i]=='1');

    if (t1<b) //agar 0 kam darim, berim avval az 2 ha 0 besazim agar kam omad berim soraghe 1 ha!
    {
        for (int i=0;i<n && t0<a;i++)
            if (s[i]=='2')
            {
                s[i] = '0';
                t0++;
            }
        for (int i=0;i<n && t0<a;i++)
        {
            if (s[i]=='1')
            {
                s[i] = '0';
                t1--;
                t0++;
            }
        }
    }
    else //agar 1 ziad darim, berim avval az 1 ha 0 besazim
    {
        for (int i=0;i<n && t0<a && t1>b;i++) //1 mogheyi ke 1 ezafi darim
        {
            if (s[i]=='1')
            {
                s[i] = '0';
                t1--;
                t0++;
            }
        
        }

        for (int i=0;i<n && t0<a;i++)
            if (s[i]=='2')
            {
                s[i] = '0';
                t0++;
            }

    }

    for (int i=0;i<n && t0>a;i++)
    {
        if (s[i]=='0')
        {
            if (t1<b)
                s[i] = '1' , t1++;
            else
                s[i] = '2';
            t0--;
        }
    }

    //0 ha hatman dorost shodan ta alan

    for (int i=0;i<n && t1<b;i++)
    {
        if (s[i]=='2')
        {
            s[i] = '1';
            t1++;
        }
    }

    for (int i=0;i<n && t1>b;i++)
    {
        if (s[i]=='1')
        {
            if (t0<a)
                s[i] = '0';
            else
                s[i] = '2';
            t1--;
        }
    }

    int res = 0;
    for (int i=0;i<s.size();i++)
        if (str[i]!=s[i])
            res++;

    cout<<res<<" "<<s<<endl;
    return 0;
}
