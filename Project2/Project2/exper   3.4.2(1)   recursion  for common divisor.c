//#define maxjia
#ifdef maxjia

#include<stdio.h>

int most_com_divisor(int x, int y)
{
	int p;
	if (x == 0 && y == 0) p = 0;
	else if (x == 0) p = y;
	else if (y == 0) p = x;
	else p = most_com_divisor(y, x%y);
	return p;
}
int main()
{
	int x, y, t;
	scanf_s("%d %d", &x, &y);
	if (x == 0 || y == 0) {
		printf("tan90");
		return 0;
	}
	t=most_com_divisor(x, y);
	printf("The maxism common divisor of x and y is %d.", t);
	return 0;
}


#endif // maxjia
