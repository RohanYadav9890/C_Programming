#include<stdio.h>
void main(){
	char arr1[3]={'A','B','C'};
	char arr2[3]={'D','E','F'};

	char *ptr1=&arr1[1];
	char *ptr2=arr1;

	char(*ptr3)[3]=&arr1;
	printf("%c\n",**ptr3);
	ptr3++;

	printf("%c\n",**ptr3);
}

