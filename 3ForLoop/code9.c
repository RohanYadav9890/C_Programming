
#include<stdio.h>
void main(){
	float i,n;
	for(float num=200.0;num<=600.0;num++){
		for(i=0.01;i*i<num;i=i+0.01);
		printf("%.2f = %.2f\n",num,i);
	}
}

