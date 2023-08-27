#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
	for(int i=0;i<row;i++){
		int num=row;
		char char1='D';
		for(int j=0;j<col;j++){
			printf("%c%d\t",char1,num);
			num--;
			char1--;
		}
		printf("\n");
	}
}
