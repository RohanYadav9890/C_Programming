/*
18 16 14
12 10 8
6 4 2
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
        int num=18;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",num);
			num=num-2;
		}
		printf("\n");
	}
}
