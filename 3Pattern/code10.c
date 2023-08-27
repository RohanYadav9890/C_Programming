#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);

	printf("Enter Column: ");
	scanf("%d",&col);
     
	for(int i=0;i<row;i++){
		int num1=1+i;
		int num2=4+i;
		char c1='D'+i;
		char c2='d'+i;
		for(int j=0;j<col;j++){
			if(i%2==0){
				printf("%c%d\t",c1,num1);
			        c1--;
				num1++;
			}
			else{
				printf("%c%d\t",c2,num2);
				c2++;
				num2--;
			}
		}
		printf("\n");
	}
}	
