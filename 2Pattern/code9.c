/*
1 3 8
15 24 35
48 63 80
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
        int num=1,sum=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",sum);
			num=num+1;
			sum=num*num-1;
		}
		printf("\n");

	}
}
