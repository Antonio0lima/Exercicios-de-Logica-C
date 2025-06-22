#include <stdio.h>
#define tammax 5

int potencia(int base, int expoente) {
    int resultado = 1;
    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int conversao(int vBin[], int tam) {
    int decimal;
    decimal = 0;
    for(int i = 0; i<tam; i++) {
        decimal += vBin[i] * potencia(2, i);
    }
    return decimal;
}
void soma(int vBinP[], int vBinS[], int vResultadoBin[]) { //P = Primeiro, S = Segundo
    for(int i = 0; i < tammax; i++) {
        if(vBinP[i] == vBinS[i]) {
            vResultadoBin[i] = 0;
        } else {
            vResultadoBin[i] = 1;
        }
    }
}


int main() {
    int bin[tammax] = {0,1,1,0,1};
    int binS[tammax] = {1,0,1,0,1};
    int novoBin[tammax] = {0,0,0,0,0};
    int i = 0;


    for(i; i < tammax; i++) {
        printf("%d", bin[i]);
    }
    i = 0;
    printf("\n");
    
    for(i; i < tammax; i++) {
        printf("%d", binS[i]);
    }


    printf("\nTamanho do vetor %d\n", i);
    printf("Numero em decimal:  %d\n", conversao(bin, tammax));
    
    printf("Somas dos vetores:" );
    soma(bin, binS, novoBin);
    for(int i = 0; i < tammax; i++) {
        printf("%d ", novoBin[i]);
    }


}