/*
8. take no of rows from the user
0
1 1
2 3 5
8 13 21 34
*/

#include<stdio.h>
void main(){
	int row,col,a=0,b=1,sum=1;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);
	for(int i=1;i<=row;i++){
		for(int j=1;j<i+1;j++){
			if(i == 1 && j==1){
				printf("0");
				continue;
			}
			printf("%d\t",sum);
			sum=a+b;
			a=b;
			b=sum;
		}
		printf("\n");
	}
}

