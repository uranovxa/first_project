#include <stdio.h>

int proverka(int a)
{
	return a % 2 == 0;
}


// вспомогательные ф/и для 14 и 24
static void ms_merge(int* a, int* buf, int l, int m, int r)
{
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r)
        buf[k++] = (a[i] <= a[j]) ? a[i++] : a[j++];
    while (i <= m) buf[k++] = a[i++];
    while (j <= r) buf[k++] = a[j++];
    memcpy(a + l, buf + l, (size_t)(r - l + 1) * sizeof(int));
}

static void ms_rec(int* a, int* buf, int l, int r)
{
    if (l >= r) return;
    int m = l + (r - l) / 2;
    ms_rec(a, buf, l, m);
    ms_rec(a, buf, m + 1, r);
    ms_merge(a, buf, l, m, r);
}



