#include <stdio.h>
#include <locale.h>



main()


{
   setlocale(LC_ALL, "Portuguese");





    int soma=0,rsv,swc,nall_1,nall_2;


    //Entrada e saida de dados


    printf(" Condição 1: Média entre os numeros digitados\n Condição 2: Diferença do maior pelo menor\n Condição 3: Produto entre os numeros digitados\n Condição 4: Divisão do primeiro pelo segundo ");

         printf("\n");



    printf("\n Digite o primeiro número: ");
    scanf("%d",&nall_1);



        printf(" Digite o segundo número: ");
        scanf("%D",&nall_2);


                        printf("\n");

                            printf(" Digite uma condição:  ");
                                scanf("%d",&swc);

                                printf("\n");
    ///////////////////////////////////////////





        //Condição switch case

            switch (swc)
                {


                    //CASE 1
                    case 1:

                        soma=(nall_1+nall_2)/2 ;


                            printf("A média dos numero digitados sao:  %d",soma);

                                printf("\n");

                    break;
        ///////////////////////////////////////////////






                    //CASE 2
                    case 2:

                        soma= nall_1-nall_2;


                        //CONDIÇÃO IF
                        if (soma<=0)
                        {
                                printf("Numeros negativos e neutros são inválidos");

                                    printf("\n");
                        }
                        else
                        {
                            printf("A Diferença dos numero digitados sao:  %d",soma);

                                printf("\n");
                        }
                        break;
                    /////////////////////////////////////////////




                    //CASE 3
                    case 3:
                        soma=(nall_1*nall_2);

                            printf("O produto dos números digitados são:  %d",soma);

                                printf("\n");


                            break;
                    //////////////////////////////////////





                     //CASE 4
                    case 4:


                        //CONDIÇÃO IF
                        if(nall_2!=0)
                        {


                        soma=(nall_1/nall_2);

                        printf("A divisão dos numeros digitados são:  %d",soma);
                            printf("\n");
                        break;
                        }
                        else
                        {
                            printf("");
                        }

                         //DEFAULT
                    default:

                        printf("\nCondição inválida");
                            printf("\n");








}
}
