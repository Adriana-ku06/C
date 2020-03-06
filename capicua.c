



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int nuo,num,nua = 0,aux;
    
    printf("Ingrese el numero a Evaluar: ");
    scanf("%d",&num);
    
    nuo = num;
    while(num > 0)
    {
         aux = num%10;
         num /= 10;
         nua = nua * 10 + aux; 
    }
    
    if(nuo ==nua)
       printf("Es Palindromo.\n");
    else
       printf("No es Palindromo.\n");
    
    system("pause");
    return 0;
    }