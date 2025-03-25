#include <stdio.h>
#include<locale.h>


float esfera(float x)

    {
        float v,h,j,z,y;

        z=4;
        y=3;
        h=pow(x,3);
        j=z/y;


     v=j*h;


       return v ;


   }

     void main()

    {

        setlocale(LC_ALL, "Portuguese");

    float x1,x2;




        printf("Digite o raio da esfera:  ");
        scanf("%f",&x1);


        printf ("o volume da raioesfera é: %.3f",esfera(x1));


    }
