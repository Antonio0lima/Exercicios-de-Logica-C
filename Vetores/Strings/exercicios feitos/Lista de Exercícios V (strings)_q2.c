#include <stdio.h>
#include <string.h>

void novaString(char s1[], char s2[], char s3[]) {
    int i,j;
    int k = 0;

    for(i = 0; s1[i] != '\0'; i++) {
        int verif = 0;

        for(j =0; s2[j] != '\0';j++) {
            if(s1[i] == s2[j]) {
                verif = 1;
                break;
            }
        }

        if (!verif) {
            int repetido = 0;

            for(int l = 0; l<k; l++) {
                if (s1[i] == s3[l]) {
                    repetido = 1;
                    break;
                } 


            }

            if (!repetido) {
                 s3[k] =  s1[i];
                k++;
            }
           
        }
    }

    s3[k] = '\0';


}
    

int main() {
    char s1[] = "abcdef";
    char s2[] = "bdf";
    char s3[100];  // array para armazenar o resultado
    novaString(s1, s2, s3);
    printf("Resultado 1: %s\n", s3);

    char s4[] = "hello";
    char s5[] = "world";
    char s6[100];
    novaString(s4, s5, s6);
    printf("Resultado 2: %s\n", s6);

    char s7[] = "programming";
    char s8[] = "gaming";
    char s9[100];
    novaString(s7, s8, s9);
    printf("Resultado 3: %s\n", s9);

    return 0;
}