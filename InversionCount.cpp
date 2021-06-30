#include<bits/stdc++.h>
using namespace std;
int Merge(int * a,int * b,int s1,int * c,int s2)
{
	int k=0,i=0,j=0;
	int ans=0;
	while(i<s1 && j<s2)
	{
		if(b[i]>c[j])
		{
         ans+=(s1-i);
         a[k++]=c[j++];
		}else
		{
			a[k++]=b[i++];
		}
	}
	while(i<s1)
	{
		a[k++]=b[i++];
	}
	while(j<s2)
	{
		a[k++]=c[j++];
	}
	return ans;
}
int MS(int *a ,int n)
{
	if(n<2)
	{
		return 0;
	}
	int mid=n/2;
	int b[mid];
	for(int i=0;i<mid;i++)
	{
		b[i]=a[i];
	}
		int c[n-mid];
	for(int i=mid;i<n;i++)
	{
		c[i-mid]=a[i];
	}

	return MS(b,mid)+MS(c,n-mid)+Merge(a,b,mid,c,n-mid);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<MS(a,n)<<endl;
}