/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que receba três notas,
calcule e mostre a média aritmética entre elas.*/
#include <stdio.h>

int main()
{
    int nota1;
    int nota2;
    int nota3;
    float media;
    
    
    printf("Informe a primeira nota:");
    scanf("%i",&nota1);
    
    printf("Informe a segunda nota:");
    scanf("%i",&nota2);
    
    printf("Informe a terceira nota:");
    scanf("%i",&nota3);
    
    media = (nota1+nota2+nota3)/3;
    
    printf("As notas informados foram: \n 1 Nota : %i \n 2 Nota : %i \n 3 Nota: %i \n E a media aritimética entre essas notas é: %.2f",nota1,nota2,nota3,media); 

    return 0;
}
