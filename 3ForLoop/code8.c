#include<stdio.h>
void main(){
       char ch1,ch2;
       
	printf("Enter the character: ");
	scanf(" %c",&ch1);

	printf("Enter the character: ");
	scanf(" %c",&ch2);

	if(ch1 == ch2){
		printf("Both Characters are same\n");
	}
	else{
	
		if(ch1>ch2){
			printf("%d\n",ch1-ch2);
		}
		else{
			printf("%d\n",ch2-ch1);
		}
	}
}
