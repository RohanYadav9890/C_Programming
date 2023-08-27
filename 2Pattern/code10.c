#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
       // int num1=row,num2=1;
     // char ch1=65+row-1,ch2='A';
	for(int i=0;i<row;i++){

        int num1=row,num2=1;
	char ch1=65+row-1,ch2='A';
		for(int j=0;j<col;j++){
			if(i%2==0){
				printf("%c%d\t",ch1,num1);
				ch1--;
				num1--;
			}
			else{
				printf("%c%d\t",ch2,num2);
				ch2++;
				num2++;
			}
		}
		printf("\n");
	}
}
