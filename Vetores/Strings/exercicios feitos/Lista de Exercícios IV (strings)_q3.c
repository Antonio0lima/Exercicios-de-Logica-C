#include <stdio.h>


void substrings (char s[], char p, char n) {

    
    char substring[n+1];
    int finalVetor= 0;
    int i = 0;
    for(finalVetor; s[finalVetor] != '\0'; finalVetor++);
    
    if ((p<0 || p>finalVetor) || (n<1)) {
        printf("A string esta vazia ");
        return;
    }


    for(p; i < n && s[p] != '\0'; i++,p++) {
        substring[i] = s[p];

        printf("%c", substring[i] );


    }


}

int main () {
    char s[] = {"ABCD"};
    substrings(s,0,6 );


    return 0;
}