#include<iostream>
#include<stdlib.h>

using namespace std;

int function(long ans,long temp,long step)
{
//	printf("%d %d %d\n",ans,temp,step);
if(ans<=temp)
  {
	if(temp==ans)
		return step;
	
	else
	{
		if(temp%2!=0)
		{
			step++;
			function(ans,(temp-1)/10,step);
		}
		else
		{	
			step++;
			function(ans,temp/2,step);
		}
			
			
	  }
	}
else return -1;
	
	

}

int main(){
	long ans;	int step;	long show[10];	long temp;
	
	scanf("%d",&step);
	
	for(int i=0;i<step;i++)
	{
		scanf("%ld%ld",&ans,&temp);
		show[i]=function(ans,temp,0);
	}
	
	for(int i=0;i<step;i++)
{
		if(i<step&&i>=1)
		printf("\n");
		
		printf("%ld",show[i]);
	}
	
	return 0;
}	

