/*
 I H G 
 F E D
 C B A
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
        char ch1='I';
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%c\t",ch1);
			ch1--;
		}
		printf("\n");
	}
}
