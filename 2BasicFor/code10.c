#include<stdio.h>
void main(){
	int num;
	int count=0;
	printf("Enter num: ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
        if(count==2){
		 printf("Prime Number\n");
	 }
	 else{
		 printf("Not a prime number\n");
	 }
	}




			


