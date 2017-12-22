//#define maxjia
#ifdef maxjia

#include<stdio.h>
void reverse_the_array(int* p, int n)
{
	int i = 0, t;
	for (; i < n / 2; ++i) {
		t = *(p + i);
		*(p + i) = *(p + n -1 - i);
		*(p + n -1 - i) = t;
	}
}
int main()
{
	int a[20], r, n, i;
	scanf("%d", &r);
	while (r--) {
		scanf("%d", &n);
		for (i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		reverse_the_array(a, n);
		for (i = 0; i < n; ++i) {
			printf("%d", a[i]);
			if (i < n - 1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}


#endif // maxjia
