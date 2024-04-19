#include <stdio.h>
#include <stdlib.h>

int main() {
//Variáveis
float log, con, ing, met, js;
  
float logico[] = {10, 5, 7, 3};
float projetos[] = {5, 3, 8, 9, 7};
float ingles[] = {7, 5, 5, 8};
float metodologia[] = {3, 7, 4, 8, 9, 10};
float java[] = {10, 7, 4, 8, 5};
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