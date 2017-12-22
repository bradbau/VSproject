//#define maxjia
#ifdef maxjia
#include<assert.h>
#include<stdio.h>
#define  R
int integer_fraction(float x);
int main(void)
{
	float  r, s;
	int s_integer = 0;
	printf("input a number: ");
	scanf("%f", &r);
#ifdef  R
	s = 3.14159*r*r;
	printf("area of round is: %f\n", s);
	s_integer = integer_fraction(s);
	assert((s - s_integer) <= 1.0);
	printf("the integer fraction of area is %d   %f\n", s_integer, (s - s_integer));
#endif
	return 0;
}

int integer_fraction(float x)
{
	int i = x;
	return i;
}


#endif // maxjia
