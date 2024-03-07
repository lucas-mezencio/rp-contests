#include <stdio.h>
#include <string.h>


int main() {

    //variáveis
    char str1[1000];
    char str2[1000];
    int count[256] = {0}; // Array para contar as ocorrências de cada caractere
    int isAnagrama = 1;

    // Recebe as strings (palavras ou frases)
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove a quebra de linha da entrada

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove a quebra de linha da entrada

    // Função para verificar se duas strings são anagramas

    // Verifica se as strings têm o mesmo tamanho
    if (strlen(str1) != strlen(str2))
        isAnagrama = 0; // Não são anagramas

    // Conta as ocorrências de cada caractere na primeira string
    for (int i = 0; str1[i] != '\0'; i++)
        count[str1[i]]++;

    // Subtrai as ocorrências de cada caractere na segunda string
    for (int i = 0; str2[i] != '\0'; i++)
        count[str2[i]]--;

    // Verifica se algum caractere teve uma quantidade diferente nas strings
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            isAnagrama = 0; // Não são anagramas
    }

    if (isAnagrama == 1)
        printf("sim\n");
    else
        printf("nao\n");

    return 0;
}