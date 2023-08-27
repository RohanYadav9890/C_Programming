#include<stdio.h>
void main(){
	float num;

	printf("Enter Number: ");
	scanf("%f",&num);
	for(float i=1;i<=5;i++){
		printf("%f = %f/%f = %f\n",i,num,i,num/i);
	}
}
