#include <stdio.h>
#include<locale.h>


main()

{setlocale(LC_ALL, "Portuguese");

//ENTRADA DE VARIAVEIS
    int qntd[7],cp,cont=0,soma[7],pdt[8]={118.70,95.80,83.50,60,23,15,3.80,1.70},soma1;
//CONDI��O WHILE INICIO
while (cont<=7)
  {
    printf("\nDigite o c�digo do produto: ");
    scanf("%d",&cp);
//SWITCH CASE INICIO
             switch (cp)
        {
        case 1:

            printf("\nAreia fina");

            printf("\nO codigo do produto � 1");

            printf("\nDigite a quantidade vendida do produto: ");
            scanf("%d",&qntd[0]);

            break;
/////////////////////

            case 2:


            printf("\nAreia m�dia");

            printf("\nO codigo do produto � 2");



            printf("\nDigite a quantidade vendida do produto: ");
            scanf("%d",&qntd[1]);



            break;
//////////////////////////

            case 3:



            printf("\nAreia grossa");

            printf("\nO codigo do produto � 3");

            printf("\nDigite a quantidade vendida do produto: ");
            scanf("%d",&qntd[2]);



            break;
///////////////////////
            case 4:



            printf("\nPedra 1");


            printf("\nO codigo do produto � 4");

            printf("\nDigite a quantidade vendida do produto: ");
            scanf("%d",&qntd[3]);



            break;
/////////////////////////////
            case 5:



            printf("\nCimento");


            printf("\nO codigo do produto � 5");

            printf("\nDigite a quantidade vendida do produto: ");
            scanf("%d",&qntd[4]);



            break;
///////////////////////////
            case 6:



            printf("\nCal");


            printf("\nO codigo do produto � 6");

            printf("\nDigite a quantidade vendida do produto: ");
            scanf("%d",&qntd[5]);



            break;
///////////////////////////
            case 7:



            printf("\nTabua bruta");


            printf("\nO codigo do produto � 7");

            printf("\nDigite a quantidade vendida do produto: ");
            scanf("%d",&qntd[6]);



            break;
//////////////////////////////
            case 8:



            printf("\nTijolo baiano");

            printf("\nO codigo do produto � 8");
            printf("\nDigite a quantidade vendida do produto: ");
            scanf("%d",&qntd[7]);


            break;
///////////////////////////////////
        }
//CONDI��O IF INICIO
    if (cp<=0)
{
    printf("\nDigite um valor maior que zero");
}
else if (cp>8)
{
    printf("\nO codigo do produto deve ser maior que 8,valide esse dado novamente  ");

}

else if (qntd[0]<=0)
{
    printf("\nA quantidade vendida deve ser maior que zero,valide esse dado novamente");

}
    cont++;

  }
//FINAL DO WHILE

//PARTE 2
printf("\n\n\Pre�o total da venda dos produtos: ");

printf("\n");

soma[0]=qntd[0]*pdt[0];
soma[1]=qntd[1]*pdt[1];
soma[2]=qntd[2]*pdt[2];
soma[3]=qntd[3]*pdt[3];
soma[4]=qntd[4]*pdt[4];
soma[5]=qntd[5]*pdt[5];
soma[6]=qntd[6]*pdt[6];
soma[7]=qntd[7]*pdt[7];

printf("\n\nA venda total do produto Areia Fina � de: %d",soma[0]);

printf("\n\nA venda total do produto Areia M�dia � de: %d",soma[1]);

printf("\n\nA venda total do produto Areia Grossa � de: %d",soma[2]);

printf("\n\nA venda total do produto Pedra 1 � de: %d",soma[3]);

printf("\n\nA venda total do produto Cimento � de: %d",soma[4]);

printf("\n\nA venda total do produto Cal Fina � de: %d",soma[5]);

printf("\n\nA venda total do produto Tabua Bruta Fina � de: %d",soma[6]);

printf("\n\nA venda total do produto Tijolo baiano � de: %d",soma[7]);


printf("\n\n\n////////////////////////////////////////////////////////////////////////");








printf("\n\n\nDados de todos os produtos:\n\n ");

printf("\n\n");


printf("\n\nC�digo do produto: 1\nAreia Fina\nQuantidade Vendida: %d\nValor Unit�rio: %d\nValor total da venda: %d ",qntd[0],pdt[0],soma[0]);




if(soma[0]<=5001.00)
   {
       printf("\nClassifica��o C");
   }

   else if(soma[0]>5001&&soma[0]<=10.001)
   {
       printf("\nClassifica��o B");
   }

   else if(soma[0]>10.001)
   {
       printf("\nClassifica��o A");
   }











printf("\n\nC�digo do produto: 2\nAreia M�dia\nQuantidade Vendida: %d\nValor Unit�rio: %d\nValor total da venda: %d ",qntd[1],pdt[1],soma[1]);




   if(soma[1]<=5001.00)
   {
       printf("\nClassifica��o C");
   }

   else if(soma[1]>5001&&soma[1]<=10.001)
   {
       printf("\nClassifica��o B");
   }

   else if(soma[1]>10.001)
   {
       printf("\nClassifica��o A");
   }








printf("\n\nC�digo do produto: 3\nAreia Grossa\nQuantidade Vendida: %d\nValor Unit�rio: %d\nValor total da venda: %d\n\n ",qntd[2],pdt[2],soma[2]);

if(soma[2]<=5001.00)
   {
       printf("\nClassifica��o C");
   }

   else if(soma[2]>5001&&soma[2]<=10.001)
   {
       printf("\nClassifica��o B");
   }

   else if(soma[2]>10.001)
   {
       printf("\nClassifica��o A");
   }





printf("\n\nC�digo do produto: 4\nPedra 1\nQuantidade Vendida: %d\nValor Unit�rio: %d\nValor total da venda: %d\n\n ",qntd[3],pdt[3],soma[3]);

if(soma[3]<=5001.00)
   {
       printf("\nClassifica��o C");
   }

   else if(soma[3]>5001&&soma[3]<=10.001)
   {
       printf("\nClassifica��o B");
   }

   else if(soma[3]>10.001)
   {
       printf("\nClassifica��o A");
   }




printf("\n\nC�digo do produto: 5\nCal\nQuantidade Vendida: %d\nValor Unit�rio: %d\nValor total da venda: %d\n\n ",qntd[4],pdt[4],soma[4]);

if(soma[4]<=5001.00)
   {
       printf("\nClassifica��o C");
   }

   else if(soma[4]>5001&&soma[4]<=10.001)
   {
       printf("\nClassifica��o B");
   }

   else if(soma[4]>10.001)
   {
       printf("\nClassifica��o A");
   }



printf("\n\nC�digo do produto: 6\nCimento\nQuantidade Vendida: %d\nValor Unit�rio: %d\nValor total da venda: %d\n\n ",qntd[5],pdt[5],soma[5]);

if(soma[5]<=5001.00)
   {
       printf("\nClassifica��o C");
   }

   else if(soma[5]>5001&&soma[5]<=10.001)
   {
       printf("\nClassifica��o B");
   }

   else if(soma[5]>10.001)
   {
       printf("\nClassifica��o A");
   }





printf("\n\nC�digo do produto: 7\nT�bua Bruta\nQuantidade Vendida: %d\nValor Unit�rio: %d\nValor total da venda: %d\n\n ",qntd[6],pdt[6],soma[6]);


if(soma[6]<=5001.00)
   {
       printf("\nClassifica��o C");
   }

   else if(soma[6]>5001&&soma[6]<=10.001)
   {
       printf("\nClassifica��o B");
   }

   else if(soma[6]>10.001)
   {
       printf("\nClassifica��o A");
   }





printf("\n\nC�digo do produto: 8\nTijolo Baiano\nQuantidade Vendida: %d\nValor Unit�rio: %d\nValor total da venda: %d\n\n ",qntd[7],pdt[7],soma[7]);


if(soma[7]<=5001.00)
   {
       printf("\nClassifica��o C");
   }

   else if(soma[7]>5001||soma[7]<=10.001)
   {
       printf("\nClassifica��o B");
   }

   else if(soma[7]>10.001)
   {
       printf("\nClassifica��o A");
   }












































































}
