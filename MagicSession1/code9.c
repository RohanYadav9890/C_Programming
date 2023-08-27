/*
9. take no of rows from the user
1
1 2
1 2 3
1 2 3 4
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);
	for(int i=1;i<=row;i++){
		int num=1;
                for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}

