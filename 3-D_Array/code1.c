#include<stdio.h>
void main(){
	int plane,row,col;
	printf("Enter Plane: ");
	scanf("%d",&plane);

	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);
        int arr[plane][row][col];
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				printf("Enter Value at arr[%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}


	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				printf("%d\t",arr[i][j][k]);
			}
		}
	}
}



