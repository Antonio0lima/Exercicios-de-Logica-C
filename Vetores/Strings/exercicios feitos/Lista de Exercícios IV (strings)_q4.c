#include <stdio.h>

void expurgarLetra (char v[], char letra) {
    int i= 0;
    for(i; v[i] != '\0'; i++) {
        

        

        if (v[i] == letra) {
            int s = i;

            for(i; v[s] != '\0'; s++) {
                v[s] = v[s+1];
            }
            
        i--;
        }
        printf("%c", v[i]);
    }
}
int main() {
    char vetor[] = {"aviao"};
    expurgarLetra(vetor, 'a');

    return 0;
}