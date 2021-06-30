#include <bits/stdc++.h>
using namespace  std;
void insertionsort(int * a,int n){
for(int i=1;i<n;i++){
	int temp=a[i];
	int j=i;
	while(j>0 && a[j-1]>temp){
		a[j]=a[j-1];
		j--;
	}a[j]=temp;
}
for (int i = 0; i <n; ++i)
{
	cout<<a[i]<<" ";
}
}
int main()
{
	int a[]={2,4,1,5,3,7};
	int n=6;
	insertionsort(a,n);
	return 0;
}