#include <stdio.h>
void inc_count(int *count_ptr)
{
	(*count_ptr)++;

}

void swapTwoNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
	int count =0;
int a=2;
int b=3;
while(count<10)
	{
	  inc_count(&count);
	printf("count%d\n ", count);
		


	}

printf("a=%d\n ",a);
printf("b=%d\n ",b);
swapTwoNumbers(&a,&b);
printf("a=%d\n ",a);
printf("b=%d\n ",b);



 return (0);  
}
