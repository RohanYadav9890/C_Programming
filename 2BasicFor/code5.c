#include<stdio.h>
void main(){
	int num;
        printf("Enter Number: ");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("One\n");
			break;
	   		
		case 2:
			printf("Two\n");
			break;

		case 3:
			printf("Three\n");
			break;

		case 4:
			printf("Four\n");
			break;

		case 5:
			printf("Five\n");
			break;

		case 0:
			printf("Number is  equal to zero");
			break;
		default:
				
			printf("Number is greater than 5 or less than 0\n");
	}
}
