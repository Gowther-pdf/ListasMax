#include <stdio.h>

void media (int n1, int n2, int n3){
    double M=(n1+n2+n3)/3;
    printf("%.2lf", M);
}

int main()
{
    int nota1, nota2, nota3;
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    
    media(nota1, nota2, nota3);

    return 0;
}