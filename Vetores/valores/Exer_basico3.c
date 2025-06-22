/*
Faça um programa em C que permita informar a quantidade de ocorrências de cada número
entre 20 e 30.

um contador por número🡪 11 contadores 🡺 vetor de contadores

1ª pos: contador do número 20

2ª pos: contador do número 21

11ª pos: contador do número 30 🡪 pos=(número – 20)/10


#include <stdio.h>

int busca(int busca) {
    return(busca-20);
}
int contadorN(int vNumeros[], int tamanho, int pos) {
    for(int i = 0; i<tamanho; i++) {
        vNumeros[pos] += 1;
    }
}
int main() {
    int vNumeros[11] = {0,0,0,0,0,0,0,0,0,0,0};
    int teste;
    scanf("%d", &teste);


    while (teste != 0) {
        contadorN(vNumeros, 11, busca(teste));
        scanf("%d", &teste);
    }
    
    for(int i = 0; i<11; i++) {
        printf("%d \n", vNumeros[i]/10);
    }
    
}
*/

/*
Uma universidade oferta 25 cursos e deseja premiar o melhor aluno, isto é o com melhor CR,
de cada curso. Os cursos são identificados por um número sequencial que varia de 101 a
125. Faça um programa que leia a matrícula do aluno, o curso e o CR, mostrando

🡪 versão inicial) o melhor CR de cada curso

🡪 versão completa) a matrícula do aluno de melhor Cr de cada curso

VERSÃO
INICIAL: um trono por curso🡪 25 tronos 🡺 vetor de tronos

1ª pos: trono do curso 101

2ª pos: trono do curso 102

25ª pos: trono do curso 125 🡪 pos = curso – 101 🡺 Acesso Direto
*/

#include <stdio.h>

int zerarVetores(int vetor[], int tam) {
    for(int i = 0; i<24; i++) {
        vetor[i] = 0;
    }

}

int busca(int curso) {
    return(curso - 101);
}

int main() {
    int mtr, curso, cr, mlrCr, cont;
    int vCursoNotas[24];
    int vMatricula[24];

    zerarVetores(vCursoNotas, 24);
    zerarVetores(vMatricula, 24);
    cont = 0;


    printf("Digite sua matricula, curso e CR: \n");
    scanf("%d %d %d", &mtr, &curso, &cr);

    while (mtr != 0)
    {
        if (cont == 0) {
            
            
            mlrCr = cr;
            vCursoNotas[busca(curso)] = mlrCr;
            vMatricula[busca(curso)] = mtr;  

        } else {
            if (cr > mlrCr) {
                mlrCr = cr;
                vCursoNotas[busca(curso)] = mlrCr;
                vMatricula[busca(curso)] = mtr; 
            }
            
        }
        
        printf("Digite sua matricula, curso e CR: \n");
        scanf("%d %d %d", &mtr, &curso, &cr);
        cont++; 
    }
    for(int i = 0; i<24; i++) {
        printf("Matricula: %d Curso: %d Nota: %d \n", vMatricula[i], 101 + i, vCursoNotas[i]);
    }

}



/*
Uma universidade oferta 25 cursos e deseja premiar o melhor aluno, isto é o com melhor CR,
de cada curso. Os cursos são identificados por um número qualque. Faça um programa
que leia a matrícula do aluno, o curso e o CR, mostrando a matrícula do aluno de melhor
Cr de cada curso; 🡺 Determinação da pos do curso: BUSCA

*/

