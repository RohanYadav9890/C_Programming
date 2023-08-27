#include<stdio.h>
void main(){
	char x;
	printf("Enter character: ");
	scanf("%c",&x);
	if(x>='A' && x<='Z'){
		printf("Uppercase\n");
	}
	else if(x>='a' && x<='z'){
		printf("Lowercase\n");
	}
	else{
		printf("Special  character\n");
	}
}

