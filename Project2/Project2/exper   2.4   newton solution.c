//#define maxjia
#ifdef maxjia
#include<stdio.h>
#define E 1e-6
double inf(double x)
{
	double f;
	f = ((3 * x - 4)*x - 5)*x + 13;
	return f;
}

double  def(double x)
{
	double d;
	d = (9 * x - 8)*x - 5;
	return d;
}


int main()
{
	double x1, x2;
	x1 = 10.0;
	do {
		x2 = x1 - inf(x1) / def(x1);
		x2 = x1 + x2;
		x1 = x2 - x1;
		x2 = x2 - x1;
	} while ((x2 - x1) >= E || x1 - x2 >= E);
	printf("%lf\n", x1);

	return 0;
}



#endif 