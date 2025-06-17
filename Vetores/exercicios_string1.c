#include <stdio.h>
#include <strings.h>



#define TAM_STRING 50
void listar_inverso(char nomes[][TAM_STRING], int n) {
    for(int i = n - 1; i >= 0; i--) {
        printf("%s \n", nomes[i]);

    }

}

char transformar_letra(char c) {
    c = c +

}

int main(void) {

char nomes[6][TAM_STRING] = {"Ana", "Pedro", "Lucas", "Mariana", "Carlos", "Julia"};
char sobrenomes[6][TAM_STRING] = {"Só", "Silva", "Sá", "Sé", "Santos", "Moura"};

listar_inverso(nomes,6);

return 0;
}


