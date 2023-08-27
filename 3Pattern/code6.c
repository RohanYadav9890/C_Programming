/*
= = = = = =
$ $ $ $ $ $
@ @ @ @ @ @
= = = = = =
$ $ $ $ $ $
@ @ @ @ @ @
*/
#include<stdio.h>
void main(){
	int row,col;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
        int  equal=1;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			
			if(1==equal && j!=col){
				printf("=\t");
			}

			else if(1==equal && j==col){
				printf("=\t");
				equal=equal+1;
			}
			else if(2==equal && j!=col){
				printf("$\t");
			}
		 	else if(2==equal && j==col){
				printf("$\t");
				equal=equal+1;
			}
			else if(3==equal && j!=col){
				printf("@\t");
			}

			else if(3==equal&&j==col){
				printf("@\t");
				equal=equal-2;
			}
			
		}

		printf("\n");
	}
}
	


