#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;int flag2;int flag3;int flag; 
	flag=0;	flag2=0;flag3=0;
	
	int a[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
		flag=1;
		break;
		}
		if(a[i]==2)
		flag2=1;
		
		if(a[i]==3)
		flag3=1;	
	}
	if(flag==1 || (flag2==1&&flag3==1))
		printf("YES");
		else
		printf("NO");
		
	return 0;
} 
