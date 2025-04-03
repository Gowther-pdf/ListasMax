#include <stdio.h>

void desenha_retangulo_solido (int l, int c, char d){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%c", d);
        }
        printf("\n");
    }
}

int main(){
    int l, c;
    char d;
    scanf("%d %d %c", &l, &c, &d);
    desenha_retangulo_solido(l,c,d);
    
    return 0;
}