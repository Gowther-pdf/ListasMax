#include <stdio.h>

int primo(int n) {
	if (n <= 1) {
		return 0;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(){
    int numero;
	scanf("%d", &numero);

	if (primo(numero)) {
		printf("E um numero primo.\n");
	} else {
		printf("Nao e um numero primo.\n");
	}

	return 0;
}
