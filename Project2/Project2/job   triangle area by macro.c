//#define maxjia
#ifdef maxjia


#include<stdio.h>
#include<math.h>
#define S ((a+b+c)/2)
#define AREA  sqrt(S*(S-a)*(S-b)*(S-c))
int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		printf("%d ", S);
		printf("%lf\n", AREA);
	}
	return 0;
}


#endif