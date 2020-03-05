#include<stdio.h>
#include<math.h>

int main(){
int num1=15;
int num2=2;
int num3=20;
int temp=0;

	if(num1>num3){
	temp=num1;  
        num1=num3;
        num3=temp;
	}

	    if(num2>num3){
        temp=num2;  
        num2=num3;
        num3=temp;
	}


	    if(num1>num2){
        temp=num1;  
        num1=num2;
        num2=temp;
}
printf("%d %d %d",num1,num2,num3);
}
