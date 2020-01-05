//将带头结点的单链表就地逆置，所谓“就地”是指辅助空间复杂度为O（1）

//反转链表 
void ReverseListNode(ListNode L)			//头插法：将链表头摘下，从第一结点开始，依次插入到头结点的后面，直到最后一个结点为止 
{
	ListNode *p,*pre;
	p=L->next;
	
	L->next=NULL;				//摘下头结点 
	while(p!=NULL){				//用	p	依次遍历 
		r=p->next;				//用 	r	记录p的后继结点，防止丢失 
								
		//插入p	
		p->next=L->next;		//将	p	放在头结点后的一个结点  前 
		L->next=p;				//将	p 	插入到头结点L的后面 
		
		p=r;					//遍历 
	} 
	return L;
}
