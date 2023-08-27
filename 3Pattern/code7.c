
/*
 1 4 27
4 27 16
27 16 125
*/
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter column: ");
	scanf("%d",&col);

	for(int i=0;i<row;i++){
		int num=i+1;
		for(int j=0;j<col;j++){
			if(num%2==0){
				printf("%d\t",num*num);
				num++;
			}
			else{
				printf("%d\t",num*num*num);
				num++;
			}
		}
		printf("\n");
	}
}



