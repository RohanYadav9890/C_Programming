#include<stdio.h>
void main(){
	int num;
	int sum=0;
	int avg;
	int temp;
	printf("Enter Number: ");
	scanf("%d",&num);
	temp=num;
	for(int i=1;i<=num;i++){
		printf("Enter Value: ");
		scanf("%d",&temp);
		sum=sum+temp;
	}
      avg=sum/num;
      printf("Sum is %d\n",sum);
      printf("Average is %d\n",avg);
}


