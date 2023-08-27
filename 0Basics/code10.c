#include<stdio.h>
void main(){
	char x;
	printf("Enter Character: ");
	scanf("%c",&x);

	if((x='A' || x=='E' || x=='I' || x=='O' || x=='U') && (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')){
	      printf("%c is Vowel\n",x);
	}
	else// if ((x>='A' && x<='Z')||(x>='a' && x<='z')
	{

	      printf("%c is Consonet\n",x);
	}	
}
