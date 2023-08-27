/*
6. take no of rows from the user
D e F g
e D c B
F g H i
g F e D
*/
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);
	for(int i=0;i<row;i++){
		char ch ='D'+i;
		for(int j=0;j<col;j++){
			if(i %2==0){
				if(j%2==0){
					printf("%c\t",ch);
				}
				else{
					printf("%c\t",ch+32);
				}
				ch++;
			}
			else{

				if(j%2==0){
					printf("%c\t",ch+32);
				}
				else{
					printf("%c\t",ch);
				}
				ch--;
			}
		}
		printf("\n");
	}
}
