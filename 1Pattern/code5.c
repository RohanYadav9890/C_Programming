#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
	for(int i=0;i<row;i++){
		char char1='A'+i;
		for(int j=0;j<col;j++){
			printf("%c\t",char1);
			char1++;
		}
		printf("\n");
	}
}
