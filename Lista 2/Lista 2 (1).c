#include <stdio.h>

double area (double raio){
    double A=3.14*(raio*raio);
    printf("%.2lf", A);
}

int main()
{
    double R;
    scanf("%lf", &R);
    
    area(R);

    return 0;
}