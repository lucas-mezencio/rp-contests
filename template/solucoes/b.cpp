#include <stdio.h>
#include <string.h>

void comprimirString(const char *entrada, char *saida) {
    int tamanho = strlen(entrada);
    int contador = 1;
    int indiceSaida = 0;

    for (int i = 1; i <= tamanho; i++) {
        if (entrada[i] == entrada[i - 1]) {
            contador++;
        } else {
            saida[indiceSaida++] = entrada[i - 1];
            if (contador > 1) {
                char contadorStr[10];
                sprintf(contadorStr, "%d", contador);
                int tamanhoContador = strlen(contadorStr);
                for (int j = 0; j < tamanhoContador; j++) {
                    saida[indiceSaida++] = contadorStr[j];
                }
                contador = 1;
            }
        }
    }

    saida[indiceSaida] = '\0';
}

int main() {

    char entrada[1000];
    char saida[1000];

    scanf("%s", entrada);

    comprimirString(entrada, saida);

    if (strlen(saida) < strlen(entrada)) {
        printf("%s\n", saida);
    } else {
        printf("%s\n", entrada);
    }
    

    return 0;
}