//4. Write a program to print even numbers 1-100

#include<stdio.h>
void main(){
	int x,y;

	printf("Enter the start: \n");
	scanf("%d",&x);

	printf("Enter the end: \n");
	scanf("%d",&y);

	for(int i=x;i<=y;i++){
		if(i%2==0){
			printf("%d",i);
		printf("\n");
		}
	}
}	
