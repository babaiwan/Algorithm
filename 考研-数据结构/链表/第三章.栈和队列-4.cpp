//�赥����ı�ͷָ��ΪL�����ṹ��data��next�����򹹳ɣ�����data��Ϊ�ַ��� 
//����㷨���жϸ������ȫ��n���ַ��Ƿ����ĶԳƣ�����  xyx,xyyx�������ĶԳ�

//  			�ж�  �������͵���Ŀ�� һ�㶼ʹ��  "ջ�� 

/*
	typedef struct LinkNode {
		int data;
		struct LinkNode *next;
	} *LStack
*/ 

Bool Mirror (LStack L,int n)		//L�Ǵ�ͷ���ĵ����� 
{
	LinkNode *p=L->next;
	int i;
	char s[n/2];					//s  �ַ�ջ ����	�����ȵ�һ�� 		ȫ��ѹ��ջ		��ջ��ʱ��  ���к��εıȽ�
	
	for(int i=0;i<=n/2;i++)
	{
		s[i]=p->data; 
	 	p=p->next;
			}							//  �Ѿ���һ�� ȫ��ѹ��  �ַ�ջ
		
		i--;							//�����������ȣ���I���� 
		
	//��ջ���Ƚ� 
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
