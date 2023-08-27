
/*
1 2 3 4
1 3 5 7
1 4 7 10
1 5 9 13
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
        printf("Enter Column: ");
	scanf("%d",&col);
                   
	for(int i=0;i<row;i++){
		int num=1;
		for(int j=0;j<col;j++){
			printf("%d\t",num);
			num=num+i+1;
		}
		printf("\n");
	}
}
				
