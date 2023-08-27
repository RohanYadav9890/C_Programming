#include<stdio.h>
void main(){
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("Even Numbers ");
	for(int i=0;i<20;i++){
		if(i%2==0){
			printf("%d\t",i);
		}
	}
        printf("\n"); 		
        printf("Odd Numbers ");
	for(int i=20;i>0;i--){
		if(i%2!=0){
			printf("%d\t",i);
		}
	}
	printf("\n");
	}

