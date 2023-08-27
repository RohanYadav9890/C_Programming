#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the two values: ");
	scanf("%d%d",&a,&b);
        if(a<b)
		printf("%d\n",a);
	else if(b<a)
		printf("%d\n",b);
	else
		printf("Both numbers are equal\n");
}
