/*
4. take no of rows from the user
    * - - -
*   - * - -
*   - - * -
*   - - - *
*/
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(i==j){
				printf("*\t");
			}
			else{
				printf("-\t");
			}
		}
		printf("\n");
	}
}
