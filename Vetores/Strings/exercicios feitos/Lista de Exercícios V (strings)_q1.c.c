#include <stdio.h>

int distinto(char s[]) {
    int novo, acumulador = 0;

    for(int i=0; s[i] != '\0';i++) {
        novo = 1;

        for(int q=0; q < i; q++) {
            if (s[q] == s[i]) {
                novo = 0;

                break;
                
            }
        }
        if (novo == 1) {
            acumulador++;
        }


    }
    return acumulador;
}

int main () {
    char string[] = {"aaaaaaa"};

    printf("%d \n", distinto(string));

}