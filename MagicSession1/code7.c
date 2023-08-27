/*
7. take no of rows from the user
E D C B A
E D C B
E D C
E D
E
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);
	for(int i=0;i<row;i++){
		int num = 65+row-1;
		for(int j=0;j<row-i;j++){
			printf("%c\t",num);
			num--;
			}
	
	printf("\n");
	}
}


