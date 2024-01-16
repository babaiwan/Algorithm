#include<stdlib.h>
#include<iostream>
using namespace std;
//这是迭代法，比较容易想到的

//还有一种递归法，太强了，完全想不到。。。
 
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
//    if(l1==NULL)
//        return l2;
//    if(l2==NULL)
//        return l1;
//    if(l1->val < l2->val){
//        l1->next = mergeTwoLists(l1->next,l2);
//        return l1;
//    }else{
//        l2->next = mergeTwoLists(l1,l2->next);
//        return l2;
//    }
//} 
struct ListNode{
	int val;
	struct ListNode *next;
};


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	struct ListNode *newhead=(struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *prev=(struct ListNode *)malloc(sizeof(struct ListNode));
    
    prev=newhead;
    
	while(l1 !=NULL && l2!=NULL)
	{
		if(l1->val <= l2->val)
			{
				prev->next=l1;
				l1=l1->next;
			}
		else
			{
				prev->next=l2;
				l2=l2->next;
			}
		prev=prev->next;
	}
	
	prev->next=NULL ? l2:l1;
	
	return newhead->next;
}

int main(){
	struct  ListNode p1={1,NULL};
	struct  ListNode p2={3,NULL};
	struct  ListNode p3={4,NULL};
	struct  ListNode p4={8,NULL};
	
	struct  ListNode n1={2,NULL};
	struct  ListNode n2={5,NULL};
	struct  ListNode n3={6,NULL};
	struct  ListNode n4={7,NULL};
	
	p1.next=&p2;
	p2.next=&p3;
	p3.next=&p4;
	
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	
	struct ListNode *t=(struct ListNode *)malloc(sizeof(struct ListNode));
	
	t=mergeTwoLists(&p1,&n1);
	
	while(t!=NULL)
	{
		printf("%d",t->val);
		t=t->next;
	}
	
}
