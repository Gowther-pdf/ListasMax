#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *to_lower_case (const char *string) {

	int tamanho=strlen(string);
	char new[tamanho];

	for(int i=0; i<tamanho; i++) {
		if(string[i]>=65&&string[i]<=90) {
			new[i]=(string[i]+ 32);
		}
		else {
			new[i]=string[i];
		}
	}

	printf("%s\n", new);
}

int main()
{
	char frase[100];
	scanf("%s", frase);

	to_lower_case(frase);

	return 0;
}