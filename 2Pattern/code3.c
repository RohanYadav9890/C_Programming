/*
  4 4 4 4
  3 3 3 3 
  2 2 2 2
  1 1 1 1
 */

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);

	for(int i=0;i<row;i++){
		int num=row-i;
		for(int j=0;j<col;j++){
			printf("%d\t",num);
			
		}
		printf("\n");
	}
}
