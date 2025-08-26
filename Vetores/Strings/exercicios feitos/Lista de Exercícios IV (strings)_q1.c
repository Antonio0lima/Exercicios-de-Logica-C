#include <stdio.h>


int minha_strcmpy(char nome1[], char nome2[]) {
    int i = 0;

    for(i; nome1[i] != '\0' && nome2[i] != '\0' ; i++) {
        if (nome1[i] > nome2[i]) {
            return -1;
        } else if (nome1 < nome2) {
            return 1;
        }
        
    }


    if (nome1[i] == nome2[i]) {
        return 0;
    } else 
        if(nome1[i] == '\0') {
            return -1;
        } else {
            return 1;
        }
    
    
}

int main () {


}