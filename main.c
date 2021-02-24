/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

    return 0;
}
