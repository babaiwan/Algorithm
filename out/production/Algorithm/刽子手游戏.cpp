#include<stdio.h>
#include<string.h>
char s[10],s1[10];int flag;
int left;int chance;

void guess(char a){
	if (left==0){
	flag=1;	}

	if(chance==0){
	flag=-1;  }
	
	for(int i=0;i<strlen(s);i++)
	{
	if (a==s[i])
	 {
	 left--;s[i]=' ';
     }
	 else
	 chance--;
    }
}
int main(){
    int rnd;    
	while(scanf("%d%s%s",&rnd,s,s1)==3 && rnd!=-1)
	{   
	printf("Round%d\n",rnd);
	left=strlen(s);
	flag=0;
	chance=7;	
	for(int m=0;m<strlen(s1);m++)
	guess(s1[m]); 
	
	if(flag!=0)break;
	
    }  
	
	
	if(flag==1)printf("YOU Win");
	if(flag==-1)printf("lose");
	if(rnd==-1)printf("you give up");

	return 0;
	getchar();
}


