#include<stdio.h>
#include<stdlib.h>
void main(){
	int plane,row,col;
	printf("Enter Plane: ");
	scanf("%d",&plane);

	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);


	int ***ptr=(int ***)malloc((plane*sizeof(int )));
	printf("%ld\n",plane*row*col*sizeof(**ptr));
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				printf("Enter Element at index[%d][%d][%d]: ",i,j,k);
				scanf("%p",(((ptr+i)+j)+k));
			}
		}
	}

	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				printf("%d\t",(*(*(ptr+i)+j)+k));
			}
		}
	}
	
}
