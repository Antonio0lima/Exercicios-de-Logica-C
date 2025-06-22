/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define TAMCURSOS 5
#define TAMVAGAS 3
int  busca(int v[], int n, int val){
    for(int i=0;i<n;i++){
        if (v[i] == val)
            return i;
    }
    return -1;
}
void exibeMatriculados(int vInscritosCurso[],int n){

    for (int i=0;i<n;i++){
        printf("\n%dº aluno: %4d",i+1,vInscritosCurso[i]);
        
    }

                     
}

void exibeTabela(int vCod[],int vQtVagas[],
                 int vInscritos[][TAMVAGAS],
                 int vUltPosOcupInscritos[],int n){

    for (int i=0;i<n;i++){
        printf("\nCurso: %4d  Vagas Atuais: %3d",vCod[i],vQtVagas[i]);
        exibeMatriculados(vInscritos[i], vUltPosOcupInscritos[i]);
    }

                     
}
void  exibeCursosDeMesmaArea(int vCod[], int vQtVagas[], 
                             char vArea[][20],int n,char area[]){
                                 
    for(int i=0;i<n;i++){
        if (strcmp(vArea[i],area)==0 &&vQtVagas[i]>0)
            printf("\n %d ",vCod[i]);
    }                                 
}
int main()
{
    //Disponibilizar a tabela de cursos
    int vCod[TAMCURSOS]={10,20,3,5,18};
    int vQtVagas[TAMCURSOS]={3,3,3,3,3};
    int vInscritos[TAMCURSOS][TAMVAGAS];
    int vUltPosOcupInscritos[TAMCURSOS]={0,0,0,0,0}; // só para o código
    char vArea[TAMCURSOS][20]={"Prog","Prog","Prog","C&C","C&C"};
    
    // Processo de inscrição
    int matr,cursoDesejado,pos,ultpos;
    printf("\nDigite a matr ou 0 para finalizar");
    scanf("%d",&matr);
    while (matr !=0){
        printf("\nDigite o curso");
        scanf("%d",&cursoDesejado);
        pos = busca(vCod, TAMCURSOS, cursoDesejado);
        if (pos != -1){ // o curso existe
        
            // incluir o aluno, se tiver vaga
            if (vQtVagas[pos] >0){
                vQtVagas[pos]--;
                ultpos=vUltPosOcupInscritos[pos];
                vInscritos[pos][ultpos]=matr;
                vUltPosOcupInscritos[pos]++;
                printf("\n%d matriculado em %d",matr,cursoDesejado);
            }
            else{
                printf("\n%d, o curso %d não tem mais vagas",matr,cursoDesejado);
                printf("\n Cursos da area %s com vagas",vArea[pos]);
                exibeCursosDeMesmaArea(vCod,vQtVagas,vArea,TAMCURSOS,vArea[pos]);
            }
        
        }
        else{
            printf("\n%d inexistente",cursoDesejado);
        }
        
        printf("\nDigite a matr ou 0 para finalizar");
        scanf("%d",&matr);
    }
    // Mostrar inscrições por curso'
    exibeTabela(vCod,vQtVagas,vInscritos,vUltPosOcupInscritos,TAMCURSOS);
    return 0;
}
