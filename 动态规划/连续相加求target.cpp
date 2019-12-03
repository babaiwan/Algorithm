#include<stdio.h>
#include<stdlib.h>
int main(){
	int nums[20]={1,2,3,4,5,6,7,8};
	int target;
	void sumup(int nums[],int target,int n);
	
	scanf("%d",&target);
	printf("%d",target);
	sumup(nums,target,7);
}
	void sumup(int nums[],int target,int n)
	{	int sums[50][50];
		for(int i=0;i<=n;i++)
			for(int j=i;j<=n;j++)
				{
					if(j==i)
					sums[i][j]=nums[j];
					else
					sums[i][j]=sums[i][j-1]+nums[j];
					
					if(sums[i][j]==target)
					printf("[%d,%d]",i+1,j+1);
				}
	}
