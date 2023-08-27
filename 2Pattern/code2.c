/*
 3 2 1 
 c b a
 3 2 1
 c b a

*/ 


#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);

	for(int i=0;i<row;i++){
		int num=3;
		char ch='c';
		for(int j=0;j<col;j++){
			if(i%2==0){
				printf("%d\t",num);
				num--;
			}
			else{
				printf("%c\t",ch);
				ch--;
			}
		}
		printf("\n");
	}
}

