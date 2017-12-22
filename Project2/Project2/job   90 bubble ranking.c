//#define maxjia
#ifdef maxjia

#include<stdio.h>

void ar_rank_up(int *a)
{
	int p, t, store, ns;
	for (p = 0; p < 10; ++p) {//0 1 2   >>p>>     <<t i.
		store = *(a + p);
		for (t = 9, ns = p; t >= p; --t) {
			if (*(a + t) < store) {
				store = *(a + t);
				ns = t;
			}// store==min of a[i] to a[p]
		}
		for (t = ns; t > p; --t) {//t>p
			*(a + t) = *(a + t - 1);
		}
		*(a + p) = store;
	}
}

int main()
{
	int a[10], i, si, n;
	int * pa = a;
	while (1) {
		i = 0;
		while (i < 10) {
			if ((scanf("%d", &a[i++])) == 0)
				return 0;
		}
		ar_rank_up(pa);
		for (i = 0; i < 10; ++i) {
			printf("%d", a[i]);
			if (i < 9) printf("->");
		}
		printf("\n");
	}
	return 0;

}
#endif // maxjia
