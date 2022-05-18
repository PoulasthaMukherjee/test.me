#include <stdio.h>

int primo(int num);

int main(void)
{
	int n_linhas;
	scanf("%d", &n_linhas);

	int n;
	scanf("%d", &n);

	int result = primo(n);
	printf("%d\n", result);
	return 0;
}


int primo(int num)
{
	for (int i = 2; i < num; i++)
		if (num % i == 0) return 0;
	return 1;
}
