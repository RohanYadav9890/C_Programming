/*
1 2 3 4
25 36 49 64
9 10 11 12
169 196 225 256
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
        int num=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i%2==0){
				printf("%d\t",num);
				num++;
			}
			else{
				printf("%d\t",num*num);
				num++;
			}
		}
		printf("\n");
	}
}
