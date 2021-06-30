#include <bits/stdc++.h>
using namespace  std;
void sorting(int * a,int n)
{
	int l=0,r=0;
	while(r<n)
	{
		if(a[r]%2==0)
		{  
         r++;
		}else
		{
			swap(a[l++],a[r++]);
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	cout<<"enter the array size\n";
	int n;
	cin>>n;
	cout<<"enter the array elements\n";
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sorting(a,n);
	return 0;
}