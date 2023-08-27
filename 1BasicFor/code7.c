//7. Write a program to print a table of 12
#include<stdio.h>
void main(){
	int table;

	printf("Enter the table number: \n");
	scanf("%d",&table);
	for(int i=1;i<=10;i++){
		printf("%d * %d =%d",i,table,i*table);
		printf("\n");
	}
}
