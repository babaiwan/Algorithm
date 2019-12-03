#include<stdio.h>
#include<iostream>
using namespace std;

void swap(int a,int b,int array[])
{
	int temp;
	temp=array[a];
	array[a]=array[b];
	array[b]=temp;
}

void heapify(int array[],int i,int size){
	if(i<size){
	
	int c1=2*i+1;
	int c2=2*i+2;
	int max=i;
	
	if(array[c1]>array[i])
		max=c1;
		
	if(array[c2]>array[i])
		max=c2;
		
	if(max!=i)
	swap(i,max,array);
	
	heapify(array,max,size);
	}
}

void buildheap(int array[],int size)
	{
		for(int i=size/2;i>=0;i--)
		heapify(array,i,size);	
		
		
	}
	
	
int main(){
	int nums[10]={1,2,3,4,5,6,7,8,9,10};
	
	
	for(int i=0;i<10;i++)
		printf("%d+",nums[i]);
		
	printf("\n");
	buildheap(nums,10);
	for(int i=0;i<10;i++)
	printf("%d+",nums[i]);
	
}
