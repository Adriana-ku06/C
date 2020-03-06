#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int prime(int x1, int x2){
int i=0;
	int cont=0;
	int j=0;
	int cantp=0;
for(i=x1;i<=x2;i++){
	cont=0;
	for(j=1;j<=i;j++){
        
		if(i%j==0){
		cont++;
			}
	
		}
	if(cont==2)
	{
	printf("%d is a prime number \n",i);

		cantp++;
}
	}

	printf("Existen %d primos", cantp);
}


int main(int argc, char**argv){
int x1=atoi(argv[1]);
int x2=atoi(argv[2]);


prime(x1,x2);



}
