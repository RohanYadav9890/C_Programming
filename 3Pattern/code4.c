/*
a B c D
b C d E
c D e F
d E f G
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
        printf("Enter Column: ");
	scanf("%d",&col);

	for(int i=0;i<row;i++){
		char ch1='a'+i;
		for(int j=0;j<col;j++){
			if(j%2==0){
				printf("%c\t",ch1);
			}
			else{
				printf("%c\t",ch1-32);
			}
			ch1++;
		}
		printf("\n");
	}
}

