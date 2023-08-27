#include<stdio.h>
void main(){
	int row;
	printf("Enter Row: ");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		int num=1+i;
		for(int j=0;j<row;j++){
			printf("%d\t",num);
			num++;
		}
printf("\n");
	}
}
