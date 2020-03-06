#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int prime(int x1){
	//int i=0;
	int cont=0;
	int j=0;
	int cantp=0;
	//for(i=1;i<=x1;i++){
	//cont=0;
	for(j=1;j<=x1;j++){
	 if(x1%j==0){ 
cont++;}
			

		}
	
	//	}


if(cont==2){
return 1;
}
else{
return 0;
}
}


int main(int argc, char**argv){
int x1=atoi(argv[1]);
//int x2=atoi(argv[2]);

int result=prime(x1);
printf("Results is %i\n", result);
if(result==1){
printf("The number %i es primo\n ",x1);
}
else{
printf("the nummber %i no es primo\n",x1);
}


}

