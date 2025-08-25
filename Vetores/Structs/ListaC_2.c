#include <stdio.h>
#include <string.h>
#define Tam 30

typedef struct {
    char nome[30];
    int idade;
    char endereço[30]; // estou considerando que o endereço nao tenha numeros!
} info_pessoa;


int main( ) {
    info_pessoa pessoa_a;
    printf("Digite seu nome: ");
    fgets(pessoa_a.nome, 51, stdin);
    printf("Digite sua idade: "); 
    scanf("%d", pessoa_a.idade);
    printf("Digite seu endereço de resisdencia");
    fgets(pessoa_a.endereço, 51, stdin);
    
    return 0;

    
}