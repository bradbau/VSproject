//#define maxjia
#ifdef maxjia


#include <stdio.h>
long sum_fac(int n);
int main(void)
{
	int k;
	for (k = 1; k<6; k++)
		printf("k=%d\tthe sum is %ld\n", k, sum_fac(k));
	return 0;
}
/*
double sum_fac(double n) 
{
	if (n == 1) return 1;
	double s = 1/n;
	double i;
	for (i = n; i >1; i--) {
		s = (s + 1)*(1/(i - 1));
	}
	return s;
}
*/

long sum_fac(int n)
{
	if (n == 1) return 1;
	long s =n;
	int i;
	long fac=1;
	for (i = n; i >1; i--) {
		s = (s + 1)*(i - 1);
	}
	return s;
}



#endif // maxjia
