#include<stdio.h>
#include<math.h>

int main(){

int i=0;

for (i=1500;i<=2000; i++)
{
	if(i%4==0 && i%100!=0 || i%400==0)

	{

		printf("%d\n",i);
}

}

}


