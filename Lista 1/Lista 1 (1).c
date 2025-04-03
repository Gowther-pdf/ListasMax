#include <stdio.h>

void linha2 (char d){
    for(int i=0;i<25;i++){
        printf("%c", d);
    }
}

int main(){
    char d;
    linha2(d='*');
    printf("\nCMP 1048\n");
    linha2(d='@');
    printf("\nTécnicas de Programação\n");
    linha2(d='+');
}