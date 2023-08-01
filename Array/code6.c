#include<stdio.h>
void main(){
	int size;
	printf("Enter size of an array: ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		if(i%2==0)
			printf("%d",arr[i]);
	}
}

