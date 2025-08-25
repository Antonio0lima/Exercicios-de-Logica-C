#include <stdio.h>

char tornar_letra_maiuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        c = (c - 'a') + 'A';
        
    }
    return c;
}

void frase_maiuscula(char string[]) {
    for(int i = 0; string[i] != '\0'; i++) {
        string[i] = tornar_letra_maiuscula(string[i]);
    }
}
int comprimento(char string[]) {
    int i = 0;
    for(i; string[i] != '\0'; i++);
    return i;

}
int posicaoUlt(char string[]) {
    int posF = comprimento(string);
    int posI = posF;

    int i = 0;
    while(posI >=0 && string[posI] != ' ') {
        posI--;
    }
    return posI+1;

}

void troca_letras(char string[], char orig, char nova) {
    int i = 0;
    for(i; string[i] != '\0';i++) {
        if (string[i] == orig) {
            string[i] == nova;
        }
    }
}

void copia(char origem[], char destino[]) {
    int i = 0;
    for(i; origem[i] !='\0';i++) {
        destino[i] = origem[i];
    }
    destino[i] = '\0';
}
int main() {
    char cidade[30]="Rio de Janeiro";
    printf ("A cidade eh %s\n", cidade);
    frase_maiuscula(cidade+posicaoUlt(cidade));
    printf ("A cidade agora em maiuscula %s\n", cidade);

    scanf(" %29[^\n]",cidade);
    scanf(" %29[^\n]s");

return 0;

}

