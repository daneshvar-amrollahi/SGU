#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;
int a[MAXN];
long long res = 0;

void merge(int l,int m,int r)
{
	int b[MAXN],i = l,j = m+1,k = l;
	while (i<=m && j<=r)
	{
		if (a[i]<=a[j])
			b[k] = a[i] , k++ , i++;
		else
		{
			b[k] = a[j] , res+=(m-i+1) , k++ , j++;
			//a[i]>a[j] hastesh --> harchi az i ta m ham hastesh az a[j] bozorgtare chon ke a[l] ta a[m] sort shodast
			//a[i]>a[j] --> i<=pos<=m: a[pos]>a[j] (chon ke a[pos]>=a[i])
			//toole baze = m-i+1
		}
	}
	while (i<=m)
		b[k] = a[i] , k++ , i++;
	while (j<=r)
		b[k] = a[j] , k++ , j++;

	for (int i=l;i<k;i++)
		a[i] = b[i];
}

void merge_sort(int left,int right)
{
	if (left<right)
	{
		int mid = (left+right)/2;
		merge_sort( left , mid );
		merge_sort( mid+1 , right);
		merge( left , mid , right);
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	merge_sort(0,n-1);
	cout<<res<<endl;
    return 0;
}
