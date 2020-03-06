#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int leapyear(int x1, int x2){
int i=0;

for (i=x1;i<=x2; i++)
{
	if(i%4==0 && i%100!=0 || i%400==0)

	{

		printf(" the leapyear %d\n ",i);
}

}
}


int main(int argc, char**argv){
int x1=atoi(argv[1]);
int x2=atoi(argv[2]);


leapyear(x1,x2);



}