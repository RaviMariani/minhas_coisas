/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que receba o valor de um
depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor
total depois do rendimento.*/
#include <stdio.h>

int main()
{
    float deposito;
    float juros;
    float rendimento;
    float resultado;
    
    printf("Informe o valor do deposito:");
    
    scanf("%f",&deposito);
    
    
    printf("Informe o valor da taixa de juros mensal:");
    
    scanf("%f",&juros);
    
    rendimento = deposito * (juros/100);
    
    resultado = deposito + rendimento;
    
    printf("Seu rendimento foi de %.2f portanto seu montante foi de %.2f ao fim.",rendimento, resultado);
    
    return 0;
}
