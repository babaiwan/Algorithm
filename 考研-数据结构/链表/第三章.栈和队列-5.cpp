//设有两个栈s1,s2都采用 顺序栈  并 共享一个存储区  [0....maxsize-1]
//为了  尽量利用空间 ，减少溢出的可能，可采用，栈顶相向，迎面增长的方式

//试设计s1,s2有关入栈和出栈的操作算法;


/*
	typedef struct {
		int stack[100];
		int top	[2];				//用 top[0]  记录左边的 栈顶指针  ________ 用 top[1] 记录右边的栈顶指针 
	}stk;
	
	stk s;			
*/

//入栈
int push(int i,int x){				//i代表哪个指针
	if(i<0||i>1)
	{	
		printf("选择栈错误");
		return false;
	}
	//判断栈满 
	if(top[1]-top[0]==1)
	{
		printf("栈满");
		return false;
	}
	
	if(i==0)
		s.stack[++top[i]]=x;	
	
	else if(i=1)
		s.stack[--top[i]]=x;
} 

//出栈
int pop(int i){
	int get;
	if(i<0||i>1)
		return -1;
			
	//判断栈空


		
	if(i==0)	//出左栈 并判断栈满 
	{
		if(top[0]==-1)
		return -1;
	else
		get=s.stack[top[i]--];
	}	
	
	
		
	if(i==1)	//出右栈 并判断栈满 
	{
		if(top[1]==maxsize)
			return -1;
		else
		get=s.stack[top[i]++];
	}
	
	
	return get;
} 

