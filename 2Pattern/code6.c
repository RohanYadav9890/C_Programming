/*
= = = =
$ $ $ $
= = = =
$ $ $ $
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i%2==0){
				printf("=\t");
			}
			else{
				printf("$\t");
			}
		}
		printf("\n");
	}
}
