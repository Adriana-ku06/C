#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int sort(int x1, int x2, int x3){
	int temp=0;

	if(x1>x3){
	temp=x1;  
        x1=x3;
        x3=temp;
	}

	    if(x2>x3){
        temp=x2;  
        x2=x3;
        x3=temp;
	}


	    if(x1>x2){
        temp=x1;  
        x1=x2;
        x2=temp;
}
printf("%d %d %d",x1,x2,x3);
}


int main(int argc, char**argv){
int x1=atoi(argv[1]);
int x2=atoi(argv[2]);
int x3=atoi(argv[3]);

sort(x1,x2,x3);



}
