//8. Write a program to print a table of 11 in reverse order
#include<stdio.h>
void main(){
	int table;

	printf("Enter the table number: \n");
	scanf("%d",&table);
	for(int i=10;i>=1;i--){
		printf("%d * %d =%d",i,table,i*table);
		printf("\n");
	}
}


