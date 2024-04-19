#include <stdio.h>
#include <stdlib.h>

int main() {
//Variáveis
float log1, log2, log3, log4, log,
con1, con2, con3, con4, con5, con,
ing1, ing2, ing3, ing4, ing,
met1, met2, met3, met4, met5, met6, met,
js1, js2, js3, js4, js5, js;
//Entradas
printf("Digite os valores para: ");
scanf("%f %f %f %f", &log1, &log2, &log3, &log4);
printf("Valor1: %.1f, Valor2: %.1f, Valor3: %.1f, Valor4: %.1f\n\n", log1, log2, log3, log4);
//
//  
printf("Digite os valores para: ");
scanf("%f %f %f %f %f", &con1, &con2, &con3, &con4, &con5);
printf("Valor1: %.1f, Valor2: %.1f, Valor3 :%.1f, Valor4: %.1f, Valor5: %.1f\n\n", con1, con2, con3, con4, con5);
//
//
printf("Digite os valores para: ");
scanf("%f %f %f %f", &ing1, &ing2, &ing3, &ing4);
printf("Valor1: %.1f, Valor2: %.1f, Valor3: %.1f, Valor4: %.1f\n\n", ing1, ing2, ing3, ing4);
//
// 
printf("Digite os valores para: ");
scanf("%f %f %f %f %f %f", &met1, &met2, &met3, &met4, &met5, &met6);
printf("Valor1: %.1f, Valor2: %.1f, Valor3: %.1f, Valor4: %.1f, Valor5: %.1f, Valor6: %.1f\n\n", met1, met2, met3, met4, met5, met6);
//
//
printf("Digite os valores para: ");
scanf("%f %f %f %f %f", &js1, &js2, &js3, &js4, &js5);
printf("Valor1: %.1f, Valor2: %.1f, Valor3: %.1f, Valor4: %.1f, Valor5: %.1f\n\n", js1, js2, js3, js4, js5);
//
float logico[] = {log1, log2, log3, log4};
float projetos[] = {con1, con2, con3, con4, con5};
float ingles[] = {ing1, ing2, ing3, ing4};
float metodologia[] = {met1, met2, met3, met4, met5, met6};
float java[] = {js1, js2, js3, js4, js5};
int i;

//Declarando vetor

int n2;

n2 = sizeof(logico) / sizeof(int);
int menor = 10;
int maior = 0;
float acumulador = 0;

for ( i = 0; i <= logico[i]; i++) {
if( logico[i]> maior ){
maior = logico[i];
}
if( logico[i]< menor){

menor = logico[i];
}
acumulador = logico[i] + acumulador;
}
//Raciocinio lógico
printf("Raciocínio lógico : %.1f\n", log = (acumulador-maior-menor));
acumulador = 0;
menor = 10;
maior = 0;
for ( i = 0; i <= projetos[i]; i++) {
if( projetos[i]> maior ){

maior = projetos[i];
}

if( projetos[i]< menor){

menor = projetos[i];
}
acumulador = projetos[i] + acumulador;
}
 //Conceitos de gerenciamento de projetos 
printf("Conceitos de Gerenciamento de Projetos : %.1f\n",con = (acumulador-maior-menor));
acumulador = 0;
menor = 10;
maior = 0;
for ( i = 0; i <= ingles[i]; i++) {
if( ingles[i]> maior ){

maior = ingles[i];
}

if( ingles[i]< menor){

menor = ingles[i];
}
acumulador = ingles[i] + acumulador;
}
//Lingua inglesa
printf("Lingua Inglesa : %.1f\n",ing = (acumulador-maior-menor));
acumulador = 0;
menor = 10;
maior = 0;
for ( i = 0; i <= metodologia[i]; i++) {
if( metodologia[i]> maior ){

maior = metodologia[i];
}

if( metodologia[i]< menor){

menor = metodologia[i];
}
acumulador = metodologia[i] + acumulador;
}
//Conceitos de metodologia ágil
printf("Conceitos de Metodologia Agíl : %.1f\n", met =(acumulador-maior-menor));
acumulador = 0;
menor = 10;
maior = 0;
for ( i = 0; i <= java[i]; i++) {
if( java[i]> maior ){

maior = java[i];
}
if( java[i]< menor){
menor = java[i];
}
acumulador = java[i] + acumulador;
}
//Linguagem javascript
printf("Linguagem javascript : %.1f\n", js = (acumulador-maior-menor));

//Nota final
printf("Nota final : %.1f\n",log+con+ing+met+js);

}