#include <stdio.h>


typedef struct {
    int horas;
    int minutos;
    int segundos;
} Tempo;


typedef struct {
    int dia;
    int mes;
    int ano;
} Calendario;


typedef struct {
    Tempo horario;
    Calendario Data;
    char texto[50];

} compromisso;

int main() {
    compromisso teste;

    teste.horario.horas = 3;
    teste.horario.minutos = 20;
    teste.horario.minutos = 10;

    

    return 0;
}