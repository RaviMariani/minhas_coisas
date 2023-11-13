/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que receba o salário de
um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um
aumento de 25%.*/
#include <stdio.h>

int main()
{
    float salario1 = 0;
    float aumento = 0;
    
    printf("Informe o valor do seu salário:");
    scanf("%f",&salario1);
    
    aumento = salario1 * 0.25 + salario1;
        
    printf("Seu salário agora corresponde a %.2f devido a um reajuste de vinte e cinco por cento na quantia total.",aumento); 

    return 0;
}
