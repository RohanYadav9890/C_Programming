/*

D C B A
e d c b
F E D C
g f e d

*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);

	for(int i=0;i<row;i++){
		char ch1='A'+row-1+i;
		char ch2='a'+row-1+i;
		for(int j=0;j<col;j++){
			if(i%2==0){
				printf("%c\t",ch1);
				ch1--;
			}
			else{
				printf("%c\t",ch2);
				ch2--;
			}
		}
		printf("\n");
	}
}
