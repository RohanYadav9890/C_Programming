#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of A,B,C: ");
	scanf("%d%d%d",&a,&b,&c);

	if(a> b && a>c){
		if(a*a==b*b+c*c){
			printf("Given values are satisfied pythagorian theorem");
		}
		else{

			printf("Given values are not satisfied pythagorian theorem");
		}
	}
        else if(b>a && b>c){
		 if(b*b==a*a+c*c){
			printf("Given values are satisfied pythagorian theorem");
		}
		else{

			printf("Given values are not satisfied pythagorian theorem");
                }
	}
	else if(c>a && c>b){

		 if(c*c==b*b+a*a){
			printf("Given values are satisfied pythagorian theorem");
		}
		else{

			printf("Given values are not satisfied pythagorian theorem");
		}
	}
	}


