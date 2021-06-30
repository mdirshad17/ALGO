#include <bits/stdc++.h>
using namespace std;
void bubblesort(int * a,int n){
	for (int i = 0; i <n-2; ++i)
	{
		for (int j = 0; j<n-1-i; ++j)
		{
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for (int i = 0; i <n; ++i)
	{
		cout<<a[i]<<" ";
	}
}
int main(){
int a[]={2,7,1,5,4,3};
int n=sizeof(a)/sizeof(int);
bubblesort(a,n);
return 0;
}