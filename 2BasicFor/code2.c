#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter values: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a > b && a>c){
		printf("%d\n",a);
	}
	else if(b > a && b>c){
		printf("%d\n",b);
	}
	else{
		printf("%d\n",c);
	}
}
