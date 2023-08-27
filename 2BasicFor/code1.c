//1.WAP to check whether the input iyear is leap year or not
#include<stdio.h>
void main(){
	int leap;
	printf("Enter Leaf year: ");
	scanf("%d",&leap);
	if(leap%4==0){
		printf("%d is a leap year\n",leap);
	}
	else if(leap > 0){
		printf("Please enter valid data");
	}
        else{
		printf("%d is not a leap year\n",leap);
	}
}
