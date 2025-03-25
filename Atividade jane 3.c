#include<stdio.h>


main()


{
    //Base do código

    float salario,soma,x;

    printf("Digite o valor do salario atual: ");
    scanf("%f",&salario);

    printf("\n ");


    //Calculo do aumento de salario

    soma = salario*0.25;

    printf("O valor do  aumento sera de:  %.2f",soma);

    printf("\n ");
    printf("\n ");

    //Calculo do aumento + salario

    x = salario*0.25+salario;


     printf("O valor do novo salario sera de:  %.2f",x);

     printf("\n ");
    printf("\n ");




    return 0;






}
