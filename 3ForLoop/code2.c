#include<stdio.h>
void main(){
	int num;
	for(int i=0;i<128;i++){
		if(i%2==0){
			printf("%d = %c\n",i,i);
		}
	}
}
