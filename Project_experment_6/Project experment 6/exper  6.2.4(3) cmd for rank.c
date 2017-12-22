#define max
#ifdef max

#include<stdio.h>
#include<malloc.h>

void number_rank_papr(int * p, int n, int argc)
{
	int i,j, t;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			if (argc) {
				if (*(p + j) < *(p + j + 1)) {
					t = *(p + j);
					*(p + j) = *(p + j + 1);
					*(p + j + 1) = t;
				}
			}
			else {
					if (*(p + j) > *(p + j + 1)) {
						t = *(p + j);
						*(p + j) = *(p + j + 1);
						*(p + j + 1) = t;
					}
				}
			}
		}
}


int main(int argc, char * argv[])
{
	int n, i,* p;
	scanf("%d", &n);
	p = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; ++i) {
		scanf("%d", p + i);
	}
	number_rank_papr(p, n, argc);
	for (i = 0; i < n; ++i) {
		printf("%d ",*(p + i));
	}
	return 0;
}


#endif