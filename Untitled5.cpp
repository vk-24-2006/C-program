#include<stdio.h>
int main()
{
	int i=0;
    while(1){  
	if(i++==3){
		printf("i=%d\n",i);
		break;
	}
	}
	printf("Final i= %d\n",i);
	return 0;
}
