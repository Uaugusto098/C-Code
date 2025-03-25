#include <stdio.h>


main()

{
    //BASE DO CODIGO

    int area,base,altura;

    printf("Digite o valor da base: ");
    scanf("%d",&base);

    printf("\n\n");

    printf("Digite o valor da altura: ");
    scanf("%d",&altura);

    printf("\n\n");

    //FIM E CALCULO DO CODIGO

    area = (base * altura) / 2;


    printf("Resultado da area de um triangulo: ");
    printf("%.2d",area);



    printf("\n\n");




    return 0;




}
