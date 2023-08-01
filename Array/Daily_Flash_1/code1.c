//1.WAP which will take 2 arrays from the user and compare between them

#include<stdio.h>
void main(){
	int size;
	printf("Enter Size of an array: ");
	scanf("%d",&size);
	int arr1[size];
	int arr2[size];

	for(int i=0;i<size;i++){
		printf("Enter Element  at Arr1 at index %d: ",i);
		scanf("%d",&arr1[i]);

		printf("Enter Element  at Arr2 at index %d: ",i);
		scanf("%d",&arr2[i]);
	}
        int flag=0;
	for(int i=0;i<size;i++){
		if(arr1[i]==arr2[i]){
			flag=1;
		}
		else
			break;
	}
	if(flag==1)
		printf("Arrays are same\n");
	else
		printf("Arrays are not same\n");
}

