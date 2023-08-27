#include<stdio.h>
void main(){
	int x;
	printf("Enter  Number: ");
	scanf("%d",&x);
	if(x>0){
		printf("%d is positive number\n",x);
	}
	else if(x<0){
		printf("%d is negative number\n",x);
	}
	else{
		printf("%d is equal to 0\n",x);

}
}
