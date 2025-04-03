#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *to_upper_case (const char *string) {

	int tamanho=strlen(string);
	char new[tamanho];

	for(int i=0; i<tamanho; i++) {
		if(string[i]>='a'&&string[i]<='z') {
			new[i]=(string[i]- 32);
		}
		else {
			new[i]=string[i];
		}
	}
    new[tamanho]='\0';
	printf("%s\n", new);
	return *new;
}

int main()
{
	char frase[100];
    fgets(frase, sizeof(frase), stdin);

	to_upper_case(frase);

	return 0;
}