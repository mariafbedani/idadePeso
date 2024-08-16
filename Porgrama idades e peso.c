// Programa que receba 10 idades, pesos e a altura. Calcule e mostre:
// a) A média das idades das 10 pessoas
// b) A quantidade de pessoas com peso superior a 90 quilos e a altura inferior a 1,50m
// c) Porcentagem de pessoas com idade entre 10 a 30 anos, que possuem altura superior a 1,90. Exibir os resulados

#include <stdio.h>
#include <stdlib.h>

int main () {

int idade;
float altura;
float peso;
int pessoa;
float media;
float percent;
int i;
int k;
int c;

k = 0;
c= 0;
media = 0;
percent = 0;

for (i = 0; i < 5; i++) {
    printf ("Pessoa %i:\n", i + 1);

    printf ("Digite a idade:\n");
    scanf ("%i", &idade);
    printf ("Digite a altura:\n");
    scanf ("%f", &altura);
    printf ("Digite o peso:\n");
    scanf ("%f", &peso);

    media +=idade;

    if (peso > 90 && altura <= 1.5)

{
     k++;

}

   if (idade > 10 && idade <=30)
   {
       if (altura > 1.9)
       {
           c++;
       }
   }


}


media = media / 10;
percent = (c * 100)/5;

printf ("\n Média das idades: %2.f \n", media);
printf ("\n A quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1.5 é de %i",k);
printf ("\n A porcentagem de pessoas entre idades de 10 a 30 anos com a altura maior que 1.9 é de %2.f %", percent);


return 0;
}
