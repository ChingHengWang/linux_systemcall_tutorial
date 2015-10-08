#include<stdlib.h>
#include<stdio.h>


int main()
{
//declare
	int c;
	int* data=malloc(20*sizeof(int));
	int i; 

// input keyboard 
	printf("size of data %ld \n",sizeof(data));
	printf("size of int %ld \n",sizeof(int));

	for(i=0;;i++){


		//read key
		c=getchar();

		//judge c is ok or noti
		// escape key
		if(c==EOF)
			break;
		// c is ok and put in the data[i]
		data[i]=c;
		//increase the size of data more 2 than i
		data=realloc(data,(i+2)*sizeof(int));
	}


//print result
	int j=0;
	for(j=0;j<i;j++) //putchar(data[j]);
		printf("data[%d] is %c , address is %p \n",j,data[j],&data[j]);
	printf("size of data %ld \n",sizeof(data));


	free(data);




	return 0;
}
