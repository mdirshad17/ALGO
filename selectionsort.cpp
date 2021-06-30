#include <bits/stdc++.h>
using namespace std;
void selsort(int  a[],int n){
	for(int i=0;i<n-1;i++){
		int min=a[i];
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(min>a[j]){
			min=a[j];
			pos=j;
			}
		}
		// cout<<i<<" :"<<min<<" \n";
		swap(a[pos],a[i]);
	}
	for (int i = 0; i <n; ++i)
	{
		cout<<a[i]<<" ";
	}
	
}
int main()
{
	int a[]={2,7,1,5,3,4};
	int n=sizeof(a)/sizeof(int);
	cout<<n<<" \n";
	selsort(a,n);
	
	return 0;

	
}