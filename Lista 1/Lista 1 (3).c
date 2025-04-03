#include <stdio.h>

void desenha_retangulo (int l, int c, char d){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(i==0||i==(l-1)||j==0||j==(c-1)){
                printf("%c", d);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    int l, c;
    char d;
    scanf("%d %d %c", &l, &c, &d);
    desenha_retangulo(l,c,d);
    
    return 0;
}