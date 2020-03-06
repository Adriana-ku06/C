#include <stdlib.h>
#include <stdio.h>


int add_two_ints(int x1, int x2)
{
  return x1 + x2; // Use return to return a value
}

int main(){
    int x1,x2,result;
    
    printf( "Introduzca primer numero (entero): \n  " );
    scanf( "%d", &x1 );
    
    printf( "\n   Introduzca segundo numero (entero): \n  " );
    scanf( "%d", &x2 );

    result=add_two_ints(x1,x2);
    printf("Result is %d\n", result);


}