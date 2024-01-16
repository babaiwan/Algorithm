#include<iostream>
 using namespace std;
 
 typedef struct node{
 	int data;
 	struct node *next;
 }Node; 
 
 Node* ReverseLinkList(Node *head){
 	if(head ==NULL || head->next == NULL)
 	 	return head;
 	
	Node * n = ReverseLinkList(head->next); 				//保存头结点 
	
	head->next->next=head;
 	head->next=NULL;
 	
 	return n;												//返回翻转后的头结点 
 	
 } 
 
 int main(void){
 	Node p1={0,NULL};
	Node p2={0,NULL};
	Node p3={0,NULL};
	Node p4={0,NULL};
 	p1.data=1;
 	p2.data=2;
 	p3.data=3;
 	p4.data=4;
 	
 	p1.next=&p2;
 	p2.next=&p3;
 	p3.next=&p4;
 	p4.next=NULL;
 	
 	Node *temp;
 	
 	temp=&p1;
 	while(temp!=NULL)
 	{
	  printf("%d",temp->data);
	  temp=temp->next;

 	}
 	
 	////////////////////////////////////////////////////////
 	 printf("\n"); 
 	 ////////////////////////////////////////////////////////
	 printf("%d",ReverseLinkList(&p1)->data);
 	
// 	temp=&p4;
// 	while(temp!=NULL)
// 	{
//	  printf("%d",temp->data);
//	  temp=temp->next;
//
// 	}
 	
 	
 	
 	return 0;
 }
