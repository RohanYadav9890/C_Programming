#include<stdio.h>
void main(){
	int arr1[3]={10,20,30};
	int arr2[3]={40,50,60};

	int (*iparr[2])[3]={&arr1,&arr2};

//	int (*ptr1[3])[2]=&arr1;
//	int (*ptr2[3])[2]=&arr2;

	printf("%p\n",*iparr[0]);
	printf("%p\n",*iparr[1]);
}
