// making the middle element as head of the list
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
void print(node * head){
	cout<<"\n";
	node * temp=head;
	while(temp!=NULL){
		cout<<temp->val<<" ";
		temp=temp->next;
	}

}
node* makemiddlehead(node *head){
	node * slow=head;
	node * slowprev=head;
	node * fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slowprev=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	slowprev->next=slow->next;
	slow->next=head;
	head=slow;
	return head;
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
head=makemiddlehead(head);
print(head);


return 0;
}