#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int n_matri;
    char curso[10];

} alunos;



int main() {
    alunos estudantes[5];


    for (int i = 0; i<5; i++) {
        printf("Usuário %d", i+1);
        printf("Qual é o seu nome?");
        fgets("%s", estudantes[i].nome, 31, stdin);
    } 
}