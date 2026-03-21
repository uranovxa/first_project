#include <stdio.h>
int main(void)
{
	printf("Hello, second file");

	printf("Ich mussen mache Anderungen");

	int x;
	if (scanf("%d", &x) != 1) {
		printf("Error 4to-to");
		return 0;
	}

	int sp = malloc(x);
	int count = 0, a;
	while (count < x && scanf("%d", &a) == 1) {
		sp[count++] = a;
	}

	int sp_prov = malloc(x);
	for (register short i = 0; i < count; i++) {
		sp_prov[i] = proverka(sp[i]);
	}

	free(sp_prov);
	free(sp);


	printf("≈щЄ что-то");

	return 0;
}