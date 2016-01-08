//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define ll long long
vector <int> add(vector <int> x,vector <int> y)
{
    vector <int> res;
    int n = x.size();
    int car = 0;
    for (int i=n-1;i>=0;i--)
    {
        int temp = (x[i]+y[i])+car;
        res.pb(temp%10);
        car = temp/10;
    }
    if (car!=0)
        res.pb(car);
    reverse(res.begin(),res.end());
    return res;    
}



vector <int> neg(vector <int> v1,vector <int> v2)
{
    while (v1.size()<v2.size())
        v1.insert(v1.begin(),0);

    while (v2.size()<v1.size())
        v2.insert(v2.begin(),0);

    vector <int> res;
    int n = v1.size();
    int burrow = 0;

    for (int i=n-1;i>=0;i--)
    {
        int d = v1[i]-burrow;
        if (i<v2.size())
            d-=v2[i];
        if (d<0)
        {
            burrow = 1;
            d+=10;
        }
        else
        {
            burrow = 0;
        }
        res.insert(res.begin(),d);
    }
    return res;
} 


vector <int> multiply(vector <int> x,vector <int> y)
{
    ll times = 0;
    ll m = 1;
    for (int i=0;i<y.size()-1;i++)
        m*=10;
    for (int i=0;i<y.size();i++)
        times+= m*(y[i]) , m/=10;
    vector <int> res;
    res.pb(0);
    for (int i=0;i<times;i++)
    {
        while (res.size()<x.size())
            res.insert(res.begin(),0);
        while (x.size()<res.size())
            x.insert(x.begin(),0);

        vector <int> temp = add(res,x);
        res = temp;
    }
    return res;
}

vector <int> power(vector <int> x,int times)
{
    vector <int> res;
    res.pb(1);
    for (int i=0;i<times;i++)
        res = multiply(res,x);
    return res;
}  
 
int maxvec(vector <int> x,vector <int> y)
{
    while (x.size()<y.size())
        x.insert(x.begin(),0);
    while (y.size()<x.size())
        y.insert(y.begin(),0);
    for (int i=0;i<x.size();i++)
    {
        if (x[i]>y[i])
            return 0;
        if (y[i]>x[i])
            return 1;
    }
    return 2;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int a,b,aa,bb;
    cin>>a>>b;
    aa = a;
    bb = b;
    vector <int> x,y;
    while (a)
        x.push_back(a%10) , a/=10;
    while (b)
        y.push_back(b%10) , b/=10;

    while (x.size()<y.size())
        x.pb(0);
    while (y.size()<x.size())
        y.pb(0);
    
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());

    a = aa;
    b = bb;
    vector <int> v1 = power(x,b);
    vector <int> v2 = power(y,a);

    if (maxvec(v1,v2)==2)
    {
        cout<<0;
        return 0;
    }
    bool mark = 0;
    if (maxvec(v1,v2)==1)
        swap(v1,v2) , mark = 1;

    vector <int> out = neg(v1,v2);
    int i = 0;
    while (out[i]==0) i++;
    if (mark)
        cout<<"-";
    for (i;i<out.size();i++)
        cout<<out[i];
    cout<<endl;
    return 0;
}
