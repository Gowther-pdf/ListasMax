#include <stdio.h>

void mes (int N) {
	switch(N) {
	case 1:
		printf("Janeiro\n");
		break;
	case 2:
		printf("Fevereiro\n");
		break;
	case 3:
		printf("Marco\n");
		break;
	case 4:
		printf("Abril\n");
		break;
	case 5:
		printf("Maio\n");
		break;
	case 6:
		printf("Junho\n");
		break;
	case 7:
		printf("Julho\n");
		break;
	case 8:
		printf("Agosto\n");
		break;
	case 9:
		printf("Setembro\n");
		break;
	case 10:
		printf("Outubro\n");
		break;
	case 11:
		printf("Novembro\n");
		break;
	default:
		printf("Dezembro\n");
	}
}

int main()
{
	int num;
	scanf("%d", &num);
	while(num<1||num>12) {
		printf("ERRO\nDigite novamente: ");
		scanf("%d", &num);
	}
	mes(num);

	return 0;
}
