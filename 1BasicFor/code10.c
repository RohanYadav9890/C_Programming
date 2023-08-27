//10. Write a program to print the product of the first 10 number
#include<stdio.h>
void main(){
	int x,y;
	int product=1;

	printf("Enter the start: \n");
	scanf("%d",&x);
	
	printf("Enter the end: \n");
	scanf("%d",&y);
	for(int i=x;i<=y;i++){
		product=product*i;
		}

	printf("The product is: %d\n",product);
}
