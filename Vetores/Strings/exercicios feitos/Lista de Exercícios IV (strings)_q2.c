#include <stdio.h>

int is_palindromo(char palavra[]) 
{
    int i = 0;
    for (i; palavra[i] != '\0'; i++);

    for (int q = 0; q < i; i--, q++) {
        if (palavra[q] != palavra[i-1]) {
            return 0;
        }
    }
    return 1;

}


int main () {
    char vetor[10] = {"casa"};
    int pali = is_palindromo(vetor);

    printf("%d \n", pali);
    
    return 0;
}