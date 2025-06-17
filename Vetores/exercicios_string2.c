#include <stdio.h>
#include <string.h>
#define TAMCURSO 5
#define TAMVAGAS 5
// curso tem quantidade de vaga. 
// CodCurso, qtdVagas, Inscritos
// 

int busca(int v[], int n, int val) {
    for(int i=0; i<n; i++) {
        if (v[i] == val)
        return i;
    }
    return -1;
}

void exibeTabela(int vCod[], int vQtVagas[], int vInscritos[][TAMCURSO], int vposOcupada[], int n){
    for (int = 0; i<n; i++) {
        printf("O curso: %d Vagas atuais: %d", vCod, vQtVagas);
    }
}

int main() {
    int vCurso[TAMCURSO] = {10,20,30,40,50};
    int qtdVagas[TAMCURSO] = {3,3,3,3,3};
    int inscritos[TAMCURSO][TAMVAGAS];
    int vposOcupada[TAMCURSO][TAMVAGAS] = {0,0,0,0,0}; // sp ára p codigo

    //processo de inscrição

    int matr, cursoDesejado, ultpos, pos;
    printf("Digite uma matricula ou 0 para finalizar");
    scanf("%d", &matr);
    while (matr != 0){
        printf("Digite o codigo do curso que deseja");
        scanf("%d", &cursoDesejado);
        pos = busca(vCurso, TAMCURSO, cursoDesejado);
        if (pos != -1){
            // O curso existe
            if (qtdVagas[pos] > 0) {
                qtdVagas[pos]--;
                ultpos = vposOcupada[TAMCURSO][TAMVAGAS];
                inscritos[pos][ultpos] = matr;
                vposOcupada[pos]++;
                printf("%d matriculado em %d", matr, cursoDesejado);
            }

        } else {
            printf("%d Inexistente", cursoDesejado);
        }
        printf("Digite a matr ou 0 para finalizar");
        scanf("%d", &matr);

    }


}