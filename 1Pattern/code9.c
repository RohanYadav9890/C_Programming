#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
	int num=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",num*num+1);
			num++;
	
		}
		printf("\n");
	}
}
