#include<stdio.h>
int main()
{
	int N;
	int dp[10];
	for(int i=0;i<=10;i++)
		dp[i]=0;
	scanf("%d",&N);
	
	
	for(int n=0;n<=10;n++)
	{
	if(n==1||n==2)
	    dp[n]=1;
	else
		dp[n]=dp[n-1]+dp[n-2];
	}
	printf("%d",dp[N]);
	
 } 
