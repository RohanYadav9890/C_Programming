/*
1. WAP To Print all the divisors of given no
Input: 30
Output: 1 2 3 5 6 10 15 30
*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("%d\t",i);
		}
	}
}
