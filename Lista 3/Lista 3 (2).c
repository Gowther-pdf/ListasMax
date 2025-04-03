#include <stdio.h>

int vogal (char caracter){
    if(caracter=='a'||caracter=='e'||caracter=='i'||caracter==111||caracter==117){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char C;
    scanf("%c", &C);
    if(vogal(C)){
        printf("E uma vogal minuscula.\n");
    }
    else{
        printf("Nao E uma vogal minuscula.\n");
    }

    return 0;
}
