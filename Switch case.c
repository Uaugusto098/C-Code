#include <stdio.h>
#include <locale.h>



main()


{
   setlocale(LC_ALL, "Portuguese");





    int soma=0,rsv,swc,nall_1,nall_2;


    //Entrada e saida de dados


    printf(" Condi��o 1: M�dia entre os numeros digitados\n Condi��o 2: Diferen�a do maior pelo menor\n Condi��o 3: Produto entre os numeros digitados\n Condi��o 4: Divis�o do primeiro pelo segundo ");

         printf("\n");



    printf("\n Digite o primeiro n�mero: ");
    scanf("%d",&nall_1);



        printf(" Digite o segundo n�mero: ");
        scanf("%D",&nall_2);


                        printf("\n");

                            printf(" Digite uma condi��o:  ");
                                scanf("%d",&swc);

                                printf("\n");
    ///////////////////////////////////////////





        //Condi��o switch case

            switch (swc)
                {


                    //CASE 1
                    case 1:

                        soma=(nall_1+nall_2)/2 ;


                            printf("A m�dia dos numero digitados sao:  %d",soma);

                                printf("\n");

                    break;
        ///////////////////////////////////////////////






                    //CASE 2
                    case 2:

                        soma= nall_1-nall_2;


                        //CONDI��O IF
                        if (soma<=0)
                        {
                                printf("Numeros negativos e neutros s�o inv�lidos");

                                    printf("\n");
                        }
                        else
                        {
                            printf("A Diferen�a dos numero digitados sao:  %d",soma);

                                printf("\n");
                        }
                        break;
                    /////////////////////////////////////////////




                    //CASE 3
                    case 3:
                        soma=(nall_1*nall_2);

                            printf("O produto dos n�meros digitados s�o:  %d",soma);

                                printf("\n");


                            break;
                    //////////////////////////////////////





                     //CASE 4
                    case 4:


                        //CONDI��O IF
                        if(nall_2!=0)
                        {


                        soma=(nall_1/nall_2);

                        printf("A divis�o dos numeros digitados s�o:  %d",soma);
                            printf("\n");
                        break;
                        }
                        else
                        {
                            printf("");
                        }

                         //DEFAULT
                    default:

                        printf("\nCondi��o inv�lida");
                            printf("\n");








}
}
