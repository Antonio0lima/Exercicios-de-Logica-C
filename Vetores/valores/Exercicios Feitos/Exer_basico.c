//Imprima os elementos de um vetor de 10 inteiros
//Some todos os valores de um vetor de float
//Crie uma função dobro() que receba um vetor e altere seus valores para o dobro
//Crie uma função que conte quantos números pares existem em um vetor

#include <stdio.h>

void imprimirVetores(int vetor[], int tamanho) {

    for(int i= 0; i < tamanho; i++) {
        printf("%d \n", vetor[i]);
    }
}

float SomaV(float vetor[], int tamanhoV) {
    int i = 0;
    float acumI = 0;
    for(i; i < tamanhoV; i++) {
        acumI += vetor[i];
    }
    return acumI;
}

void dobro(int vetor[], int tamanhoV) {
    int i = 0;
    for(i; i<tamanhoV; i++) {
        vetor[i] = vetor[i] * 2;
        printf("%d - ", vetor[i]);
    }
}
int contarPares(int vetor[], int tamanho) {
    int i=0;
    int contPares = 0;

    for(i; i< tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            contPares++;
        }
    }
    return contPares;
}
int main(){
    int vNum[10] = {1,2,3,4,5,6,7,8,9,10};
    float vFloat[5] = {1.2,3.2,5.4,3.2,6.0};


    imprimirVetores(vNum, 10);
    printf("%.2f \n", SomaV(vFloat, 5));
    dobro(vNum, 10);
    printf("\nExistem %d números pares nesse vetor", contarPares(vNum, 10));
}


