//1. Write a program to print the first 10 capital Alphabets

#include<stdio.h>
void main(){
	char input1,input2;
	printf("Enter the start  character: \n");
	scanf("%c",&input1);

	printf("Enter the end character: \n");
	scanf(" %c",&input2);

	for(int i=input1;i<=input2;i++){
		printf("%c ",i);

	}

}
