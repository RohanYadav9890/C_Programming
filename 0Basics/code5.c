#include<stdio.h>
void main(){
	int input;
	printf("Enter Number: ");
	scanf("%d",&input);
	if(input%5==0 && input%11==0){
		printf("%d is divisible by 5 & 11 \n",input);
	}
	else{
		printf("%d is not divisible by 5 & 11 \n",input);
	}
}
