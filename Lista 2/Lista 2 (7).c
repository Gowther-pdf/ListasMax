#include <stdio.h>

void fibonacci (int n) {
	int i, a = 0, b = 1, c = 0;
	if (n == 0 || n == 1)
	{
		printf("%d", a);
	}
	else {
		for (i = 2; i < n; i++)
		{
			a = b;
			b = c;
			c = a + b;
		}
		printf("%d\n", c+b);
	}
}

int main ()
{
	int num;
	scanf("%d", &num);
	fibonacci(num);
	return 0;
}