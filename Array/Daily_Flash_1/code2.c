//2.WAP to make an array of the table of Given Number
//Print the array using a pointer

#include<stdio.h>
void main(){
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
        int arr[10];
	for(int i=0;i<10;i++){
		arr[i]=i+1;
	}
	for(int i=0;i<10;i++){
		printf("%d\t",num*arr[i]);
	}
}
