//2. Write a program to print the first 100 numbers
#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the starting number: \n");
	scanf("%d",&x);
	printf("Enter the ending number: \n");
	scanf("%d",&y);
	for(int i=x;i<=y;i++){
		printf("%d",i);
	        printf("\n");
	}
}
