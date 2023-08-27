//6. Write a program to print reverse from 100-1

#include<stdio.h>
void main(){
	int x,y;

	printf("Enter the start: \n");
	scanf("%d",&x);

	printf("Enter the end: \n");
	scanf("%d",&y);
	for(int i=x;i>=0;i--){
		printf("%d",i);
		printf("\n");
	}
}

