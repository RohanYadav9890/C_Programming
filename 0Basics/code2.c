#include<stdio.h>
void main(){
	int x,ans,ans1,ans2,ans3;
	printf("Enter the value: ");
	scanf("%d",&x);

	ans=++x + x++ + ++x;
	printf("The value of ans: %d\n",ans);
	printf("The value of x: %d\n",x);

	ans1=++x + ++x + + ++x + ++x;
	printf("The value of ans1: %d\n",ans1);
	printf("The value of x: %d\n",x);
} 
