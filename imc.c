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

    printf("O seu IMC é %.2f " , imc);

    if (imc <= 18.5){
        printf("Abaixo do peso! \n");
    }   else if (imc <= 25.5){
        printf("Peso normal (Ideal) \n");
    }   else if (imc <= 29.5){
        printf("Sobrepeso \n");
    }   else if(imc <= 34.9){
        printf("Obesidade grau I");
    }   else if (imc <= 39.9){
        printf("Obesidade grau II(Severa)");
    }   else{
        printf("Obesidade grau III(mórbida)");
    }    
    return 0;

}