/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que receba o salário-base
de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário
tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.*/
#include <stdio.h>

int main()
{
    float salario;
    float gratificacao;
    float imposto;
    
    printf("Informe o valor do seu salário:");
    
    scanf("%f",&salario);
    
    gratificacao = salario*0.05;
    
    imposto = salario*0.07;
    
    salario = salario + gratificacao - imposto;
    
    printf("Seu salário a receber corresponde a %.2f devido a %.2f de gratificação e o decréscimo de %.2f de impostos.",salario,gratificacao,imposto); 

    return 0;
}
