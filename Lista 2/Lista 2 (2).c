#include <stdio.h>

void volume (double raio){
    double V=4*3.14*(raio*raio*raio)/3;
    printf("%.2lf", V);
}

int main()
{
    double R;
    scanf("%lf", &R);
    
    volume(R);

    return 0;
}