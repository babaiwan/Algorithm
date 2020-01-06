//设单链表的表头指针为L，结点结构由data和next两个域构成，其中data域为字符型 
//设计算法：判断该链表的全部n个字符是否中心对称，例如  xyx,xyyx都是中心对称

//  			判断  回文类型的题目， 一般都使用  "栈” 

/*
	typedef struct LinkNode {
		int data;
		struct LinkNode *next;
	} *LStack
*/ 

Bool Mirror (LStack L,int n)		//L是带头结点的单链表 
{
	LinkNode *p=L->next;
	int i;
	char s[n/2];					//s  字符栈 ，将	链表长度的一半 		全部压入栈		出栈的时候  进行后半段的比较
	
	for(int i=0;i<=n/2;i++)
	{
		s[i]=p->data; 
	 	p=p->next;
			}							//  已经将一半 全部压入  字符栈
		
		i--;							//对于奇数长度，将I过半 
		
	//出栈并比较 
	while(p->next !=NULL   && 	s[i]==p->data)
	{	
		p=p->next;
		i--;
	}
	if(i==-1)
		return true;
	else
		return false;		
	
 } 
