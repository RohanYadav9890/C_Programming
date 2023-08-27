#include<stdio.h>
void main(){
	int num;
	char chr;
	float rupees;
	double crMoney;

	printf("Enter the num:  \n");
	scanf("%d",&num);

	printf("Enter the Character:  \n");
	scanf(" %c",&chr);


	printf("Enter the Rupees in float:  \n");
	scanf("%f",&rupees);


	printf("Enter the num:  \n");
	scanf("%lf",&crMoney);


	printf("The size of num is :  %ld\n",sizeof(num));
	printf("The size of character is :  %ld\n",sizeof(chr));
	printf("The size of Rupees is : %ld\n",sizeof(rupees));
	printf("The size of CrMoney is : %ld\n",sizeof(crMoney));
}
