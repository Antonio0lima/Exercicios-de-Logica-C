//Busque um valor em um vetor e retorne sua posição (ou -1)
//Crie um vetor com nomes (vetor de char[]) e busque por um nome
//Crie uma função buscaIndice(int cod, int vet[], int tam) que retorna o índice de um código

#include <stdio.h>

int busca(int vetor[], int tamanho, int busca) {
    for(int i = 0; i < tamanho; i++) {
        if (vetor[i] == busca) {
            return vetor[i];
        }   
    }
    return -1;
}
int main(){
    int vNum[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d", busca(vNum, 10, 10));
}