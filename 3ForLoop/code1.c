#include<stdio.h>
void main(){
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	if(num%3==0)
		printf("Given Number is multiple of 3\n");
	else
		printf("Given Number is not multiple of 3\n");
}
