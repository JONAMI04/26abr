#include <stdio.h>
#include <string.h>
#include "lista.h"

int main(void) {
    Alumno juan;
    inicial(&juan);

    printf("nombre %s\n",juan.nombre);
    printf("matricula %d\n",juan.idMatricula);

    for(int i=0;juan.nota[i]!=0;i++){
        printf("nota %d\n",juan.nota[i]);
    }
    return 0;
}
