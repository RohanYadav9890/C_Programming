
/*
16 15 14 13
L K J I
8 7 6 5
D C B A
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);
	 int num=row*row;
	 int num1=65+row*row-1;

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i%2==0){
				printf("%d\t",num);
			}
			else{
				printf("%c\t",num1);
			}
			num--;
			num1--;
		}
		printf("\n");
	}
}

