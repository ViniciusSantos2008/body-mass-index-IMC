#include <stdio.h>
int main (){

    float peso, altura, imc;
    char nome[50];

    printf("Qual seu nome? \n");
    scanf("%s" , nome);

    printf("Qual o seu peso? (Kg) \n");
    scanf("%f" , &peso);

    printf("Qual sua altura? (Cm) \n");
    scanf("%f" , &altura);
    altura = altura/100;
    imc = peso / (altura * altura);

    printf("O seu IMC é %f " , imc);

    return 0;

}