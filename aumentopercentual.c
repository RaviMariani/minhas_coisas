/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que receba o salário de
um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o
novo salário.*/
#include <stdio.h>

int main()
{
    float salario1;
    float aumento;
    float salario2;
    
    printf("Informe o valor do seu salário:");
    scanf("%f",&salario1);
    
    printf("Informe o valor percentual do seu aumento:");
    scanf("%f",&aumento);
    
    
    salario2 = salario1 + (salario1*aumento/100);
        
    printf("Seu salário agora corresponde a %.2f devido ao aumento de %.2f por cento.",salario2,aumento); 

    return 0;
}
