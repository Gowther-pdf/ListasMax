#include <stdio.h>

void perfeito (int num){
    int s, j;
    s=0;
    for(j=1; j<num; j++) {
		if(num%j==0) {
			s+=j;
		}
	}
	if(s==num) {
		printf("%d=", num);
		int primi=1;
		for(j=1; j<num; j++) {
			if(num%j==0) {
				s+=j;
				if(!primi){
				    printf("+");
				}
				printf("%d", j);
				primi=0;
			}
		}
	}
}

int main()
{
	int  N;
	scanf("%d", &N);
    perfeito(N);
	
	return 0;
}