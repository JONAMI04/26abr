//
// Created by nahue on 26/4/2024.
//

#include <string.h>
#include "lista.h"

void inicial(Alumno *unalumnocualquiera) {
    unalumnocualquiera->idMatricula=45678;
    unalumnocualquiera->nota[0]=10;
    unalumnocualquiera->nota[1]=2;
    unalumnocualquiera->nota[2]=4;

    strcpy(unalumnocualquiera->nombre, "hola");

}
