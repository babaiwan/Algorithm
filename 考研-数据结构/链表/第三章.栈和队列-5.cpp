//��������ջs1,s2������ ˳��ջ  �� ����һ���洢��  [0....maxsize-1]
//Ϊ��  �������ÿռ� ����������Ŀ��ܣ��ɲ��ã�ջ������ӭ�������ķ�ʽ

//�����s1,s2�й���ջ�ͳ�ջ�Ĳ����㷨;


/*
	typedef struct {
		int stack[100];
		int top	[2];				//�� top[0]  ��¼��ߵ� ջ��ָ��  ________ �� top[1] ��¼�ұߵ�ջ��ָ�� 
	}stk;
	
	stk s;			
*/

//��ջ
int push(int i,int x){				//i�����ĸ�ָ��
	if(i<0||i>1)
	{	
		printf("ѡ��ջ����");
		return false;
	}
	//�ж�ջ�� 
	if(top[1]-top[0]==1)
	{
		printf("ջ��");
		return false;
	}
	
	if(i==0)
		s.stack[++top[i]]=x;	
	
	else if(i=1)
		s.stack[--top[i]]=x;
} 

//��ջ
int pop(int i){
	int get;
	if(i<0||i>1)
		return -1;
			
	//�ж�ջ��


		
	if(i==0)	//����ջ ���ж�ջ�� 
	{
		if(top[0]==-1)
		return -1;
	else
		get=s.stack[top[i]--];
	}	
	
	
		
	if(i==1)	//����ջ ���ж�ջ�� 
	{
		if(top[1]==maxsize)
			return -1;
		else
		get=s.stack[top[i]++];
	}
	
	
	return get;
} 

