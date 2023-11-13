/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que receba quatro
números inteiros, calcule e mostre a soma desses números.*/
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int soma;
    
    printf("Informe o primeiro número inteiro:");
    scanf("%i",&num1);
    
    printf("Informe o segundo número inteiro:");
    scanf("%i",&num2);
    
    printf("Informe o terceiro número inteiro:");
    scanf("%i",&num3);
    
    printf("Informe o quarto número inteiro:");
    scanf("%i",&num4);
    
    soma = num1+num2+num3+num4;
    
    printf("Os números informados foram: \n 1 Número : %i \n 2 Número : %i \n 3 Número: %i \n 4 Número: %i \n E a soma entre todos esses números é: %i",num1,num2,num3,num4,soma); 

    return 0;
}
