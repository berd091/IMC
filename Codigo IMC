#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float altura, peso, imc;
    
    printf("Digite sua altura em metros(m): ");
    scanf("%f", &altura);
    
    printf("\nDigite seu peso em quilos(kg): ");
    scanf("%f", &peso);
    
    imc = peso / (altura * altura);
    printf("\nSeu IMC e: %f", imc);
    
    if (imc < 18.5){
    printf("\nAbaixo do Peso.");
    }
    if (imc >= 18.5 && imc < 24.9) {
    printf("\nPeso normal.");
    }
    if (imc >= 24.9 && imc < 34.9) {
    printf("\nObesidade Grau I");
    }
    if (imc >= 34.9 && imc < 39.9) {
    printf("\nObesidade Grau II");
    }
    if (imc >= 39.9) {
    printf("\nObesidade Grau III");
    }
    return 0;
}
