#include<stdio.h>
#include<string.h>

void *mystrlen(char *str){
	int count=0;
	int count1=0;
	while(*str !='\0'){
		str++;
		count++;
	}
	printf("%d\n",count);

}

void main(){
        char arr[20];
	printf("Enter String: ");
	gets(arr);
	mystrlen(arr);
}
