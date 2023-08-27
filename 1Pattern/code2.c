
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
	for(int i=0;i<row;i++){
		int num=1;
		char char1='a';
		for(int j=0;j<col;j++){
			if(i%2==0){
				printf("%d\t",num);
				num++;
			}
			else{
				printf("%c\t",char1);
				char1++;
			}
		}
		printf("\n");
	}
}
