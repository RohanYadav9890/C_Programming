//5.WAP takes a 2d array from the user and prints its addition of odd elements.
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);

	int arr[row][col];
	int sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Enter Element at [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			if(arr[i][j]%2!=0)
				sum=sum+arr[i][j];
			else
				continue;
		}

		}
	printf("The addition of odd elements is: %d\n",sum);
}

