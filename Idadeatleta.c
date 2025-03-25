#include <stdio.h>
#include <locale.h>



main()
{
  setlocale(LC_ALL, "Portuguese");



  int nd,x,y;


  printf("                 CATEGORIA DE NATAÇÃO POR IDADE ");

  printf("\n\n");


  printf("Digite a idade do atleta:  ");
  scanf("%d",&nd);

  printf("\n\n");


if (nd>=5 && nd<=7)

{

  printf("O atleta pertence a categoria infantil");
}
  else if (nd>=8 && nd<=10)
  {
    printf("O atleta pertence a categoria juvenil");

  }
  else if (nd>=11 && nd<=15)
    {
      printf("O atleta pertence a categoria adolescente");

    }

  else if (nd>16 && nd<=30)
    {
      printf("O atleta pertence a categoria adulta");

    }

  else if (nd>30)
    {
      printf("O atleta pertence a categoria seniôr");

    }

  else if (nd<5)
  {
    printf("A idade do atleta é inválida");
  }
}
