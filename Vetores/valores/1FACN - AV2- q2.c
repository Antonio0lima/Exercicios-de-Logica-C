#include <stdio.h>
#define tamEmpregados 6

float encontraMenor(int empregados, float vSalario[]) {
    float menorSalario;

    for(int i = 0; i < empregados; i++) {
        if (i == 0)
        {
        menorSalario = vSalario[i];
        } else {
            if (vSalario[i] < menorSalario) {
                menorSalario = vSalario[i];
            }
        }
        
        
    }
    return menorSalario;
}

float exibeDifMenorRetornaSoma(float menorSalario, int nEmpregados, int vInscricao[], float vSalario[]) {
    float difTotalSalario, difSalario;
    difTotalSalario = 0;
    

    for(int i = 0; i < nEmpregados; i++) {
        difSalario = vSalario[i] - menorSalario;
        printf("Codigo: %d\n", vInscricao[i]);
        printf("Diferença de Salário: %.2f\n", difSalario);
        printf("-----------\n");
        difTotalSalario += difSalario;
    }
    return difTotalSalario;


}

int main(){
    int vInsc[tamEmpregados]={1010,1020,1030,1040,1050,1060};
    float vSalario[tamEmpregados] = {1000.00,4020.00,900.00,10400.00,20000.00,1000.00};

    exibeDifMenorRetornaSoma(encontraMenor(tamEmpregados, vSalario), tamEmpregados, vInsc, vSalario);

    return 0;
}  