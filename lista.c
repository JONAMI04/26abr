//
// Created by nahue on 26/4/2024.
//

#include <string.h>
#include <malloc.h>
#include <stdio.h>
#include "lista.h"

void inicial(Alumno *unalumnocualquiera) {
    unalumnocualquiera->idMatricula=45678;
    unalumnocualquiera->nota[0]=10;
    unalumnocualquiera->nota[1]=2;
    unalumnocualquiera->nota[2]=4;

    strcpy(unalumnocualquiera->nombre, "hola");

}

Alumno *newalu(int matricula, char *nombre) {
    Alumno *alumno = malloc(sizeof (alumno));
    if (alumno == NULL){
        printf("sin memoria");
        exit -1;
    }
    strcpy(alumno->nombre, nombre);
    alumno->idMatricula=matricula;
    alumno->sig=NULL;

    return alumno;
}

void encolar(Alumno **pcabecera) {
    if (*pCabecera==NULL){

    }

}
