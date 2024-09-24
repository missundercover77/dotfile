#include <stdio.h>
#include <stdlib.h>
// Incluons les fichiers d'entête de notre librairie utils
#include "utils.h"
// Lors de la compilation, le compilateur va chercher les fichiers d'entête dans le répertoire spécifié
// Nous voulons inclure le .so généré par notre librairie
// $ gcc -o main main.c -L./ -lutils

int main(){
    printf("Hello World\n");
    return 0;
}
