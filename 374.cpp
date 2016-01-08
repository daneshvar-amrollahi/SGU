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


int main()
{
    ios_base::sync_with_stdio(false);

    int a,b,k;
    cin>>a>>b>>k;
    a+=b;
    vector <int> x,y;
    while (a)
        x.push_back(a%10) , a/=10;
    
    reverse(x.begin(),x.end());

    vector <int> res = power(x,k);

    for (int i=0;i<res.size();i++)
        cout<<res[i];
    cout<<endl;
    return 0;
}
