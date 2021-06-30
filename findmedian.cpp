// find the median of linked list
#include <bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node * next;
	node(int x){
		this->val=x;
		next=NULL;
	}
};
void insert(node ** head,int x){
	node * temp=*head;
	if(*head==NULL){
		*head=new node(x);
	}else
	{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new node(x);
	}

}
float findmedian(node * head){
	node *slow=head,*fast=head;
	
	node * x=head;
	while(fast!=NULL && fast->next!=NULL){
		x=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	float ans;
	if(fast!=NULL){
		ans=(float)slow->val;
	}else{
		ans=(((float)slow->val)+((float)x->val))/2;
	}
	return ans;
}
int main()
{
node * head=NULL;
int n;
cout<<"enter the number of links\n";
cin>>n;
for (int i = 0; i < n; ++i)
{
int x;
cin>>x;
insert(&head,x);
}
float x=findmedian(head);
cout<<x;
return 0;
}