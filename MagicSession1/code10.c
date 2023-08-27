/*
10. take no of rows from the user
D D D D
  C C C
    B B
      A
      */

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);
	for(int i=0;i<row;i++){
		int num=65+row-i-1;
		for(int j=0;j<col;j++){
			if(i>j){
				printf(" \t");
			}
			else{
				printf("%c\t",num);
			}
		}
		printf("\n");
	}
}
