/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, float nota4, float nota5);

int main() {
    float nota1, nota2, nota3, nota4, nota5, media;
    
    printf("Digite as notas do aluno: ");
    scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);
    
    media = calcularMedia(nota1, nota2, nota3, nota4, nota5);
    
    printf("Media: %.2f\n", media);
    
    if (media >= 6.0){
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }
    
    return 0;
}


float calcularMedia(float nota1, float nota2, float nota3, float nota4, float nota5) {
    return (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
}