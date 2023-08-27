/*
3 b 1 d
a 2 c 0
3 b 1 d
a 2 c 0
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
		char ch='a';
		for(int j=0;j<col;j++){
		
			if(i%2==0){
				if(j%2==0){
					printf("%d\t",num);
				}
		                else{
				       printf("%c\t",ch);
				}
				num--;
				ch++;
			}
			else if(i%2!=0){
				if(j%2==0){
					printf("%c\t",ch);
				}
				else{
					printf("%d\t",num);
				}
				ch++;
				num--;
			       
		}
	}
		printf("\n");
}
}

