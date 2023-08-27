#include<stdio.h>
void main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if(x>10){
		printf("%d is greater than 10\n",x);
	}
	else if(x<10){

		printf("%d is less than 10\n",x);
	}
	else{
		printf("%d is equal to 10\n",x);
	}
}

