#include<stdio.h>
void main(){
	int num,product=1;
	printf("Enter Number: ");
	scanf("%d",&num);
	for(int i=num;i>0;i--){
		product=product*i;
	}
	printf("%d\n",product);

}

