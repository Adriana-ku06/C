
#include<stdio.h>

int main(){
int i; 

 for(i=0;i<=100;i++){
	if(i%3==0 && i%5==0)
		printf("fizzbuuzz\n");
	if(i%3==0)
                printf("fizz\n");

	if( i%5==0)
                printf("Buzz\n");
	else
		printf("%d.\n",i);
}
return 0;
}
