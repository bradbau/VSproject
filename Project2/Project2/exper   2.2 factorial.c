//#define maxjia
#ifdef maxjia

#include <stdio.h>
int  main(void)
{
	int i, n, s = 1;
	printf("Please enter n:");
	scanf("%d", &n);
	//for (i = 1; i <= n; i++)  
	//	s = s*i;
	/*i = 1;
	while(i<=n){
	s *= i;
	++i;
	}*/

	/*i = 1;
	do {
	s *= i;
	++i;

	} while (i <= n);*/

	printf("%d! = %d", n, s);
	system("pause");
	return 0;
}

#endif

//#define maxjia1
#ifdef maxjia1

#include<stdio.h>
int main()
{
	int n = 0, s, i = 1, vn = 1;
	scanf_s("%d", &s);
	do {
		++n;
		for (; i <= n; ++i) {
			vn *= i;
		}
	} while (vn < s);
	printf("n=%d", n);

	return 0;
}
#endif // maxjia
