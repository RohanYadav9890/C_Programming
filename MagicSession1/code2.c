/*
2. WAP to count digits in given no
Input: 94211
Output: digit count is 5
*/
#include<stdio.h>
void main(){
	int num,rem,count=0;
	printf("Enter Number: ");
	scanf("%d",&num);

	while(num > 0){
		rem=num%10;
		count++;
		num=num/10;
	}
	printf("%d\n",count);
}

