#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter angle: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180){
		printf("Triangle is valid \n");
	}
        else{
		printf("Triangle is not valid \n");
	}
}



