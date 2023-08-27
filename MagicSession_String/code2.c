#include<stdio.h>
void main(){
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	int temp=num;
	int count=0;

	while(num!=0){
		count++;
		num=num/10;
	}
	int arr[count];
	int temp1=count;
	int num1=0;

	while(count!=0){
		arr[num1]=temp%10;
		count--;
		num1++;
	}
	for(int i=0;i<temp1;i++){
		for(int j=i;j<temp1;j++){
			if(arr[j]>arr[i]){
			      int temp1=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<temp1;i++){
		printf("%d\t",arr[i]);
	}
}
