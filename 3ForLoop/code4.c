#include<stdio.h>
void main(){
	int start,end,sum=0;
	printf("Enter Start Number: ");
	scanf("%d",&start);

	printf("Enter End Number: ");
	scanf("%d",&end);

	for(int i=start;i<=end;i++){
		if(i%5==0){
			sum++;
		}
	}
	printf("%d\n",sum);
}
