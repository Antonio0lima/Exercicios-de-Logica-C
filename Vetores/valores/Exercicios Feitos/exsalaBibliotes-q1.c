#include <stdio.h>
#define tamAcervo 20000


int busca(int vetor[], int tam, int valorBuscavel) {

    for(int i = 0; i<tam; i++) {
        if (vetor[i] == valorBuscavel) {
            return i;
        }
    }
    return -1;
}

void imprimir(int n) {
    if(n == 1) {
        printf("Obra inexistente \n");
    } else if (n == 2) {
        printf("Disponivel \n");
    } else {
        printf("nao Disponível \n");
    }
}

int main() {
    int vAcervoObras[tamAcervo] = {12,30,22,34,44,24};
    int vSituacaoObras[tamAcervo] = {2,1,1,2,2,1};
    int codObras, pos;

    printf("Esta a procura de qual livro? [Digite o codigo]: \n");
    scanf("%d", &codObras);

    while (codObras != 0) {
        
        pos = busca(vAcervoObras, tamAcervo, codObras);
        if (pos == -1) {
            imprimir(1);
        } else if (vSituacaoObras[pos] == 2) {
            imprimir(2);

        } else {
            imprimir(3);
        }
        
        printf("Esta a procura de qual livro? Digite o código [0 para encerrar o programa]: \n");
        scanf("%d", &codObras);
    }
    


}