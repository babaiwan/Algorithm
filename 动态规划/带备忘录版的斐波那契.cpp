#include<stdio.h>
#include<string.h>
int main()
{   int n;int m[10];int ans;
    int fib(int m[],int N);
 
    memset(m,0,9);
    scanf("%d",&n);
    ans=fib(m,n);
 
    printf("%d",ans);
    
}

int fib(int m[],int N)
{
if(N==1||N==2)
    return 1;
    
//剪枝    判断是否计算过，计算过就不再重复计算
if(m[N]!=0)
    return m[N];
 
    m[N]=fib(m,N-1)+fib(m,N-2);
    return m[N];    
}
