/*
4 a 3 b
4 a 3 b
4 a 3 b
4 a 3 b
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
        printf("Enter Column: ");
	scanf("%d",&col);

	for(int i=0;i<row;i++){
		int num=4;
		char ch='a';
		for(int j=0;j<col;j++){
			if(j%2==0){
				printf("%d\t",num);
				num--;
			}
			else{
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
