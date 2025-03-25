#include <stdio.h>
#include<locale.h>


main()
{



setlocale(LC_ALL, "Portuguese");



int sl[6]={35,4,22,20,36,30},p,x,y;


while (x<=5)
{


printf("\n\nDigite o numero da sala: ");
scanf("%d",&p);


if(p==1)
{
    printf("A sala tem %d  pessoas",sl[0]);
}
else if (p==2)
{
    printf("A sala tem %d pessoas ",sl[1]);
}

else if (p==3)
{
    printf("A sala tem %d pessoas ",sl[2]);
}

else if (p==4)
{
    printf("A sala tem %d pessoas ",sl[3]);
}

else if (p==5)
{
    printf("A sala tem %d pessoas ",sl[4]);
}

else if (p==6)
{
    printf("A sala tem %d pessoas ",sl[5]);
}

else
{
    printf("Numero de sala invalido, reinicie o sistema");
}




x++;

}











































}
