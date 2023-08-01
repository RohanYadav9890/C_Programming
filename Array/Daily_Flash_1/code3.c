//3.WAP to take an array from the user and reverse the array. Take two arrays and assign first values to 2nd.
#include<stdio.h>
void main(){
	int size;
	printf("Enter Size: ");
	scanf("%d",&size);
	int arr1[size];
	int arr2[size];

	for(int i=0;i<size;i++){
		printf("Enter Element at index %d: ",i);
		scanf("%d",&arr1[i]);
	
	}
        int temp=size;
	for(int i=0;i<size;i++){
		arr2[i]=arr1[temp-1];
		temp--;
	}
	printf("Array 1: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	printf("Array 2: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr2[i]);
	}
	printf("\n");
}
