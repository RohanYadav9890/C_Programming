//5. Write a program to print ASCII values from 0 to 127
#include<stdio.h>
void main(){
	int x;

	printf("Enter the digit: \n");
	scanf("%d",&x);

	for(int i=0;i<=x;i++){
		printf("%d = %c",i,i);
		printf("\n");
	}
}
