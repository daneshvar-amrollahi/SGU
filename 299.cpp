//Bismillah
#include <bits/stdc++.h>
using namespace std; 
#define pb push_back
#define ll long long

vector <int> add(vector <int> x,vector <int> y) //tabeye jaam
{    
    
    while (x.size()<y.size())
        x.insert(x.begin(),0);
    while (y.size()<x.size())
        y.insert(y.begin(),0);

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

bool cmp( vector <int> x , vector <int> y)
{
    if (x.size()!=y.size())
        return x.size()<y.size();

    for (int i=0;i<x.size();i++)
        if (x[i]!=y[i])
        {
            return x[i]<y[i];
        }
    return 0; //equal
}


bool bigger(vector <int> x,vector <int> y)
{ 
    //0 --> x is larger
    //1 --> y is larger
    
    if (x.size()!=y.size())
        return x.size()>y.size(); 

    for (int i=0;i<x.size();i++)
    {
        if (x[i]==y[i])
            continue;
        else
            return x[i]>y[i];
    }
    return 0; //if equal --> consider y is larger
}


int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector <int> v[1010];
    for (int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        vector <int> num;
        for (int j=0;j<s.size();j++)
            num.pb(s[j]-'0');
        v[i] = num;
    } 
    sort(v,v+n,cmp);
    
    for (int i=0;i<n-2;i++)
    {
        vector <int> sum = add(v[i],v[i+1]);
        if (bigger(sum,v[i+2])==1) //aya sum > v[i+2]
        {
            for (int j=0;j<v[i].size();j++)
                cout<<v[i][j];
            cout<<" ";
            for (int j=0;j<v[i+1].size();j++)
                cout<<v[i+1][j];
            cout<<" ";
            for (int j=0;j<v[i+2].size();j++)
                cout<<v[i+2][j];
            cout<<endl;
            return 0;
        }
    }

    cout<<"0 0 0"<<endl;

    return 0;
}
