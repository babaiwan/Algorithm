#include<iostream>
#include<stdlib.h>
using namespace std;

  struct ListNode {
      int val;
      struct ListNode *next;
  };

struct ListNode *Reverse(struct ListNode *head){
	if(head ==NULL || head->next == NULL)
		return head;
	else{
		struct ListNode *temp=Reverse(head->next);
		head->next->next=head;
		head->next=NULL;
		return temp; 
		}
} 

int getNode(struct ListNode *headA, struct ListNode *headB) {
  
    struct ListNode *p1=(struct ListNode*)malloc(sizeof(struct ListNode));
	p1=headA;
	struct ListNode *p2=(struct ListNode*)malloc(sizeof(struct ListNode));
	p2=headB;
	struct ListNode *ans=(struct ListNode*)malloc(sizeof(struct ListNode));
	
	
	while(p1->val == p2->val){
		ans=p1;
		p1=p1->next;
		p2=p2->next;	
	}

    return ans->val;
}

int getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *newhead1=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *newhead2=(struct ListNode*)malloc(sizeof(struct ListNode));
    p=headA;
	newhead1=Reverse(p);
	p=headB;
	newhead2=Reverse(p);
    int answer;
    answer=getNode(newhead1,newhead2);
    return answer;
}

int main(){
	struct ListNode *p=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *newhead1=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *newhead2=(struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode p1={0,NULL};
	struct ListNode p2={0,NULL};
	struct ListNode p3={0,NULL};
	struct ListNode p4={0,NULL};
	struct ListNode p5={0,NULL};
	
	
	struct ListNode p6={0,NULL};
	struct ListNode p7={0,NULL};
	struct ListNode p8={0,NULL};
	struct ListNode p9={0,NULL};
	struct ListNode p10={0,NULL};
	
	
	
	p1.next=&p2;		//AÁ´±í
	p2.next=&p3;
	p3.next=&p4;
	p4.next=&p5;	 

	p6.next=&p7;		//BÁ´±í 
	p7.next=&p8;
	p8.next=&p9;
	p9.next=&p10;
	
	p1.val=1;
	p2.val=2;
	p3.val=3;
	p4.val=4;
	p5.val=5;
	
	p6.val=6;
	p7.val=7;
	p8.val=3;
	p9.val=4;
	p10.val=5;
	
	

	printf("%d",getIntersectionNode(&p1,&p6));
	
	
}
