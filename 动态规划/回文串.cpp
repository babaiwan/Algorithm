#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/*char stack[50];
char * longestPalindrome(char * s){
    int longest(char*s,int i,int j,int k);
    int j=strlen(s);
    bool flag=longest(s,0,j,0);
    return stack;
}



int longest(char*s,int i,int j,int k)
{
   while(i<=j)
{
    if(s[i]==s[j])
    {   
    stack[k]=s[i];
        k++;
    return longest(s,i+1,j-1,k);
        }
    else
    return false;
    }
return true;
}
*/
 
int main()
{	int n;
	char s[10];
	
 	for(int i=0;i<=6;i++)
 		scanf("%d",s[i]);
 		
 	n=strlen(s);
	for(int j=0;j<6;j++)
		printf("%d",s[j]);
	  

}
