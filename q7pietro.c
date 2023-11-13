/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que receba o salário-base
de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse
funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base.*/
#include <stdio.h>

int main()
{
    float salario;
    float gratificacao;
    float imposto;
    float salario1;
    
    printf("Informe o valor do seu salário:");
    
    scanf("%f",&salario);
    
    imposto = salario*0.1;
    
    gratificacao = 600;
    
    salario1 = salario + gratificacao - imposto;
    
    printf("Seu salário a receber corresponde a %.2f devido a %.2f de gratificação e o decréscimo de %.2f de impostos.",salario1,gratificacao,imposto); 

    return 0;
}
