//4.WAP to take a 3d array from the user and make an addition of the elements.
#include<stdio.h>
void main(){
	int row,col,plane;
	printf("Enter Plane: ");
	scanf("%d",&plane);
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
	int sum=0;
	int arr[plane][row][col];
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				printf("Enter Element at [%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
				sum =sum+arr[i][j][k];
			//	sum=sum+ *(*(*arr+i)+j)+k;
		 }
	    }
	}
	for(int i=0;i<plane*row*col;i++){
		printf("%d ",*(arr)+i);
	}
	printf("The Sum of element is : %d\n",sum);
 }			


