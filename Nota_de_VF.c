#include <stdio.h>
#include <stdlib.h>


int main(void)
{

float nota_ve1;
float nota_ve2;
float nota_vc;
float nota_vf;


printf("Calcularemos o quanto você precisa na VF \nInsira apenas numeros entre 0 e 10 ! \nEntre com a primeira nota de VE \n");
scanf("%f",&nota_ve1);

if(nota_ve1>10 || nota_ve1<0)
{
    printf("Digite um numero entre 0 e 10 !\n");
    return 0;
}


printf("Entre com a nota de VC \n");
scanf("%f",&nota_vc);

if(nota_vc>10 || nota_vc<0)
{
    printf("Digite um numero entre 0 e 10 !\n");
    return 0;
}

printf("Entre com a segunda nota de VE \n");
scanf("%f",&nota_ve2);


if(nota_ve2>10 || nota_ve2<0)
{
    printf("Digite um numero entre 0 e 10 !\n");
    return 0;
}

nota_vf = (20 - nota_vc - ((nota_ve1+nota_ve2)/2))/2;

if(nota_vf <=4)
{
    nota_vf=4;  //Caso do aluno precisar de menos de 4
}

printf("Voce precisa tirar %.2f na VF !", nota_vf);

return 0;
}
