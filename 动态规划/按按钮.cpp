#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void function(int a[],int b[],int c1[],int d[],int index[]){
	char c;	int i=0;
	while((c=getchar())!=EOF)
	{	
		if(index[i]==1)
		{
			if(c=='A'&& a[i]==1)
			putchar('0');
		
			if(c=='B'&& b[i]==1)
			putchar('0');
			
			if(c=='C'&& c1[i]==1)
			putchar('0');
			
			if(c=='D'&& d[i]==1)
			putchar('0');
			
		}
		else
		{putchar('-1');}
		
		i++;
	
	}
	
}
	
	
int main(){
	char addstring(char **string,char c,int i);
	
	char ans[5][5]={"ABCD","AD","BC","D","ACD"};
	for(int i=0;i<=4;i++)
		for(int j=0;j<=4;j++)
			printf("%c",ans[i][j]);

	int a[5];
	int b[5];
	int c[5];
	int d[5];
	int index[5];
	for(int k=0;k<5;k++)
		{	
			a[k]=0;
			b[k]=0;
			c[k]=0;
			d[k]=0;
			index[k]=0;
		}
	
for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	{
			if(ans[i][j]=='A')
			a[i]=1; 
	
			if(ans[i][j]=='B')
			b[i]=1; 
			
			if(ans[i][j]=='C')
			c[i]=1;
			
			if(ans[i][j]=='D')
			d[i]=1;  
	}
	
	
for(int i=0;i<5;i++)
	if(a[i]==1 || b[i]==1 || c[i]==1 || d[i]==1)
		index[i]=1;

function(a,b,c,d,index);

return 0;
	
} 






