/*
5. take no of rows from the user
2 3 5
7 11 13
17 19 23
*/

#include<stdio.h>
void main(){
	int row,col,count1=0;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Column: ");
	scanf("%d",&col);
	for (int i = 1;i<=25;i++){
	      int count=0;
		for(int j=1;j<=i;j++){
			
			if(i%j==0){
				count++;
			}
		}	
	if(count==2){
		printf("%d\t",i);	
		count1++;
		if(count1%row==0){
			printf("\n");		
	      		}		
	}
	}
}




