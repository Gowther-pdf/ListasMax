#include <stdio.h>

void desenha_retangulo_preenchido (int l, int c, char d, char e){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(i==0||i==(l-1)||j==0||j==(c-1)){
                printf("%c", d);
            }
            else{
                printf("%c", e);
            }
        }
        printf("\n");
    }
}

int main(){
    int l, c;
    char d, e;
    scanf("%d %d %c %c", &l, &c, &d, &e);
    desenha_retangulo_preenchido(l,c,d,e);
    
    return 0;
}