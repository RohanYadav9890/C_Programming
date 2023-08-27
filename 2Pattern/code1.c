/*
 4 3 2 1
 5 4 3 2 
 6 5 4 3
 7 6 5 4
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);

	for(int i=0;i<row;i++){
		int num=row+i;
		for(int j=0;j<col;j++){
			printf("%d\t",num);
			num--;
		}
		printf("\n");
	}
}
