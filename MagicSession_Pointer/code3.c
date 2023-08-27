#include<stdio.h>
#include<stdlib.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);

	int *ptr=(int *)malloc((row*col)*sizeof(int));

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Enter Element at [%d][%d]: ",i,j);
			scanf("%d",((ptr+i)+j));
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",((*(ptr+i)+j)));
		}
	}
	printf("\n");
}
}

