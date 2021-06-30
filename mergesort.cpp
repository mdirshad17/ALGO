#include <bits/stdc++.h>
using namespace std;
void merge(int * a,int * l,int leftCount,int * r,int rightCount){
int i=0,j=0,k=0;
while(i<leftCount && j<rightCount){
if(l[i]<r[j]){
	a[k++]=l[i++];
}else{
	a[k++]=r[j++];
}
}
while(j<rightCount){
	a[k++]=r[j++];
}
while(i<leftCount){
	a[k++]=l[i++];
}

}
void mergesort(int * a,int n){
	if(n<2){
		return ;
	}
	int mid=n/2;
	int * l=new int[mid];
	int * r=new int[n-mid];
	for (int i = 0; i <mid; ++i)
	{
		l[i]=a[i];
	}
	for (int i = mid; i <n; ++i)
	{
		r[i-mid]=a[i];
	}
	mergesort(l,mid);
	mergesort(r,n-mid);
	merge(a,l,mid,r,n-mid);

}
int main(int argc, char const *argv[])
{
	int a[]={2,7,5,1,3};
	int n=sizeof(a)/sizeof(a[0]);
	mergesort(a,n);
	for (int i = 0; i <n; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}