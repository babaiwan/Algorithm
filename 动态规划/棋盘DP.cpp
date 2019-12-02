#include<stdio.h>
#include<stdlib.h>
int dp[50][50];
int Max(int a,int b){
		if(a>b)
	{ 	//printf("%d\n",a);	
		return a;
	}
		else 
		return b;
	}
	
  
int main(){
    int n,m;int ans;
    int nums[50][50];
      for(int i=0;i<50;i++)
        for(int j=0;j<50;j++)
             {
			 nums[i][j]=0;
             dp[i][j]=0;
			 }
    
    scanf("%d%d",&m,&n);
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
          scanf("%d",&nums[i][j]);


	for(int i=n;i>=0;i--)
		for(int j=m;j>=0;j--)
		{
		if(i==n || j==m)
		dp[i][j]=nums[i][j];
		  
		else
 		dp[i][j]=Max(dp[i+1][j],dp[i][j+1])+nums[i][j];
		}
	
   printf("%d",dp[0][0]); 
 
   }
