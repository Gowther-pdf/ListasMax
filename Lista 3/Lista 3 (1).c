#include <stdio.h>

int consoante (char c) {
	if((c>=65&&c<=90)||(c>=97&&c<=122)) {
		if(c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U'&&c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u') {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}

int main()
{
	char caracter;
	scanf("%c", &caracter);
	if(consoante(caracter)) {
		printf("E uma consoante.\n");
	}
	else {
		printf("Nao E uma consoante.\n");
	}

	return 0;
}
