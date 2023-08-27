//3. Write a program to print the first ten, 3 digit number
#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the digit: \n");
	scanf("%d",&x);

	printf("Enter the digit: \n");
	scanf("%d",&y);

	for(int i=x;i<=y;i++){
		printf("%d",i);
		printf("\n");
	}
}
