/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que receba três notas e
seus respectivos pesos, calcule e mostre a média ponderada dessas notas.*/
#include <stdio.h>

int main()
{
    int nota1;
    int nota2;
    int nota3;
    int peso1;
    int peso2;
    int peso3;
    float media;
    
    
    printf("Informe a primeira nota:");
    scanf("%i",&nota1);
    
    
    printf("Informe o peso da primeira nota:");
    scanf("%i",&peso1);
    
    printf("Informe a segunda nota:");
    scanf("%i",&nota2);
    
    
    printf("Informe o peso da segunda nota:");
    scanf("%i",&peso2);
    
    printf("Informe a terceira nota:");
    scanf("%i",&nota3);
    
    
    printf("Informe o peso da terceira nota:");
    scanf("%i",&peso3);
    
    media = (nota1+nota2+nota3)/(peso1+peso2+peso3);
    
    printf("As notas informadas foram: \n 1 Nota : %i \n 2 Nota : %i \n 3 Nota: %i \n E a media ponderada entre essas notas é: %.2f",nota1,nota2,nota3,media); 

    return 0;
}
