//#define maxjia
#ifdef maxjia

#include<stdio.h>


int f(int i,int t)
{
	int p;
	for (p = 0; p < 2*t - 2 * i-2; ++p)
		printf(" ");
	return 0;
}

int yang(int *a, int cir, int j)
{
	int p;
	if (cir == 0) p = 1;
	else if (j == 0 || j == cir) p = 1;
	else p = yang(a, cir - 1, j) + yang(a, cir - 1, j - 1);
	return p;
}
int main()
{
	int a[21][21] = { 1 };
	int i, j, n, cir;
	int st;//store the value of yang 
	while (1) {
		scanf_s("%d", &n);
		if (n == 0) return 0;
		a[1][0] = 1;
		a[1][1] = 1;
		for (cir = 0; cir < n; ++cir) {
			f(cir, n);
			for (j = 0; j <= cir; ++j) {
				st = yang(*a, cir, j);
				if (j != 0) {
					if (st < 10) printf("   ");
					else if (st < 100) printf("  ");
					else if (st < 1000) printf(" ");
				}
			   printf("%d", st);
				if (j == cir) printf("\n");
				
			}
			
		}printf("\n");
	}
	return 0;
}


#endif