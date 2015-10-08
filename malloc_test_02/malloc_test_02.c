

#include<stdlib.h>
#include<stdio.h>




int main(){

	int* data=malloc(sizeof(int));
	int i;
	int c;
	for(i=0;;i++)
	{
		c=getchar();
		if(c==EOF)
			break;
		data[i]=c;
		printf("i = %d\n",i);
	
	}
	printf("number of data %d\n",i);

	printf("size of data %ld\n",sizeof(data));
	return 0;
}
