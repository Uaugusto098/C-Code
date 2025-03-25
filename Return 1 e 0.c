#include <stdio.h>
#include <locale.h>


int retorno(int x)
{

        if(x>=1)
        {
            printf("  Número 1");
        }
        else if(x<=0)
        {
            printf("Numero 0");
        }

        return x;

}



void main()

{
    setlocale(LC_ALL, "Portuguese");

    int x1;

    printf("Digite um numero: ");
    scanf("%d",&x1);


    printf("",retorno(x1));



    return;


}



