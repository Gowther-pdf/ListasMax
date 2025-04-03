#include <stdio.h>

int fat (int num)
{
    int resultado=1;
    for(int i=num;i>0;i--){
        resultado*=i;
    }
    return resultado;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d",fat(n));
	return 0;
}