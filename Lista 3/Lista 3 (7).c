#include <stdio.h>
#include <string.h>

void caixa_com_texto_personalizada(char *str, int n, char c) {
    int tamanho = strlen(str);

    if (tamanho > n - 2) {
        tamanho = n - 2;
    }
    int espacos = (n - 2 - tamanho) / 2;
    int sobra = (n - 2 - tamanho) % 2;
    int e = espacos + (sobra == 1 ? 1 : 0);
    int d = espacos;

    for (int i = 0; i < n; i++) printf("%c", c);
    printf("\n");

    printf("%c", c);
    for (int i = 0; i < e; i++){
        printf(" ");
    }
    for (int i = 0; i < tamanho; i++){
        printf("%c", str[i]);
    }
    for (int i = 0; i < d; i++){
        printf("%c\n", c);
    } printf(" ");

    for (int i = 0; i < n; i++) printf("%c", c);
    printf("\n");
}

int main() {
    char caracter, string[100];
    int num;

    scanf("%s %d %c", string, &num, &caracter);

    caixa_com_texto_personalizada(string, num, caracter);

    return 0;
}
