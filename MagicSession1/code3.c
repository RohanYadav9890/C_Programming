/*
3. WAP to print all the composite numbers between a given range
Input : Enter Start 1
Enter End 15
Output:
4 6 8 9 10 12 14 15
*/

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter Start: ");
	scanf("%d",&start);

	printf("Enter End: ");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
                int count=0;
		for(int num=1;num<=i;num++){
			if(i%num==0){
				count++;
		}
		}
		if(count>2){
			printf("%d\t",i);
		}
		else
			continue;

	}
}
