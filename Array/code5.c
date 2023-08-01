#include<stdio.h>
void main(){
	int size;
	printf("Enter Array Size: ");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
