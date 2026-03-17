#include <stdio.h>

int proverka(int a)
{
	return a % 2 == 0;
}

void poka3()
{
	printf("ууууууусссссссссссссссссссиии");
}

void sortirovka_xyem(int* sp, int lenght)
{
	for (int i = 0; i < lenght - 1; i++){
		int pos = i;
		for (int j = i + 1; j < lenght; j++) {
			if (sp[pos] > sp[j])
				pos = j;
		}

		if (pos != i) {
			int temp = sp[i];
			sp[i] = sp[pos];
			sp[pos] = temp;
		}
	}
}