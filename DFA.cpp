#include <bits/stdc++.h>
using namespace std;
// sorting the array of zeros ones and twos 
void DFA(int * a,int n){
	int l=0,m=0,r=n-1;
	while(m<=r)
	{
		if(a[m]==0){
			swap(a[l],a[m]);
			l++;
			m++;
	}else if(a[m]==1){
		m++;
		}else{
			swap(a[m],a[r]);
			r--;
		}
	}
}
int main()
{
	int a[]={0,1,1,0,1,0,2,1,2,1,2,2,0};
	int n=sizeof(a)/sizeof(int);
	DFA(a,n);
	for (int i = 0; i <n; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;

}