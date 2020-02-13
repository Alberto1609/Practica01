#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c;
int opt;
printf("1. Suma \n2. Resta \n3. Multiplicacion \n4. Division");
printf("\n\nSeleccione una opcion: ");
scanf("%d",&opt);

printf("\nIntroduce el primer valor: ");
scanf("%f",&a);
printf("\nIntroduce el segundo valor: ");
scanf("%f",&b);

if(opt==1)
 {
    printf("\nLa suma es:%f ",c=a+b);
 }
  else if(opt==2)
  {
    printf("\nLa resta es:%f ",c=a-b);
  }
   else if(opt==3)
   {
    printf("\nLa multiplicacion es:%f ",c=a*b);
   }
    else if(opt==4)
    {
    while(b==0)
    {
        printf("\nError, b debe de ser diferente de 0");
        printf("\nIntrodusca el segundo operando");
        scanf("%f",&b);
    }
    printf("\nLa division es:%f ",c=a/b);
    }
     else
     {
     printf("\nValor incorrecto");
     }
}
