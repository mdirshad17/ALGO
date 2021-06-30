#include <bits/stdc++.h>
using namespace std;
// arrays are in sorted order
void solve(int* a1,int n,int * a2,int m){
	int totallength=n+m;
	int gap=totallength;
	while(gap!=0){
		gap=gap/2;
		for (int i = 0; i+gap <totallength; ++i)
		{
		if(i+gap<n){
			if(a1[i+gap]<a1[i]){
				swap(a1[i],a1[i+gap]);
			}
		}else if(i+gap>=n && i<n){
			if(a2[i+gap-n]<a1[i])
			{
            swap(a2[i+gap-n],a1[i]);
			}

		}else if(i>=n){
			if(a2[i+gap-n]<a2[i-n]){
				swap(a2[i+gap-n],a2[i-n]);
			}
		}
		
	}
}
}
void print(int *a1,int n){
	for (int i = 0; i <n; ++i)
	{
		cout<<a1[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	int a1[]={1,4,7,8,10};
	int a2[]={2,3,9};
	int n=sizeof(a1)/sizeof(int);
	int m=sizeof(a2)/sizeof(int);
	solve(a1,n,a2,m);
    print(a1,n);
    print(a2,m);
    return 0;
}