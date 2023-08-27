#include<stdio.h>
void main(){
	char val1;
	char val2;
	int sub;
	printf("Enter Charater1: ");
        scanf("%c",&val1);

	printf("Enter Charater2: ");
        scanf(" %c",&val2);

	if(val1==val2){
		printf("Both Chracter are same: ");
	}
	else if(val1!=val2){
		if(val1>val2){

			sub=val1-val2;
			printf("%d\n",sub);
	}
		else{
			sub=val2-val1;
			printf("%d\n",sub);
                                
}
}
}
