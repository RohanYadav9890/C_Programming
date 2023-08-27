#include<stdio.h>
#include<stdlib.h>
void main(){
	int size;
	printf("Enter Element count in array: ");
	scanf("%d",&size);

	int *ptr=(int *)malloc(size*sizeof(int));

	for(int i=0;i<size;i++){
		printf("Enter Element at index %d: ",i);
		scanf("%d",(ptr+i));
	}
	for(int i=0;i<size;i++){
		printf("%d\t",*(ptr+i));
	}
	free(ptr);
  //    	ptr=NULL;
	printf("%d",*ptr);
}
