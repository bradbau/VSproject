
//#define maxjia
#ifdef maxjia


#include<stdio.h>
#include<math.h>
int main()
{
	int n;
      float a, b, c, area, p;
	   scanf("%d", &n);

	   for (; n>0; --n) {

			scanf("%f %f %f", &a, &b, &c);
			p = (a + b + c) / 2.0;
			area = sqrt(p*(p - a)*(p - b)*(p - c));
			printf("area=%f\n", area);
			printf("%f\n", p);
		}

	return 0;
}
#endif // maxjia