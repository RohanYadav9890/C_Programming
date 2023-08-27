//9. Write a program to print the sum of the first 10 odd numbers
#include<stdio.h>
void main(){
	int x,y;
	int sum=0;

	printf("Enter the start: \n");
	scanf("%d",&x);
	
	printf("Enter the end: \n");
	scanf("%d",&y);
	for(int i=x;i<=y;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	printf("The sum of odd number is %d\n",sum);
}
