//
// Created by nahue on 26/4/2024.
//

#ifndef UNTITLED_LISTA_H
#define UNTITLED_LISTA_H

typedef struct Alumno{
    int idMatricula;
    char nombre[25];
    int nota[12];
} Alumno;

void inicial(Alumno *alumno);

#endif //UNTITLED_LISTA_H
