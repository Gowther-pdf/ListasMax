#include <stdio.h>
#include <string.h>

int palindromo(const char *palav) {
    int esquerda = 0;
    int direita = strlen(palav) - 1;
    
    while (esquerda < direita) {
        if (palav[esquerda] != palav[direita]) {
            return 0;
        }
        esquerda++;
        direita--;
    }
    return 1;
}

int main() {
    char palavra[100];
    scanf("%s", palavra);
    
    if (palindromo(palavra)) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo!\n");
    }
    
    return 0;
}
