//#define maxjia
//δ���ǵ����ܵ��û����󣬱��������һ����������봮
#ifdef maxjia

#include<stdio.h>
int main()
{
	int n, i;
	char a[30];
	while (1) {
		scanf("%d", &n);
		getchar();
		if (n == 0) return 0;
		for (i=0; n > 0; --n) {
			do {
				scanf("%c", a+i);
			} while (*(a+i++) != '\n');
			i--;
		}
		*(a + i) = 0;
		printf("%s\n", a);
	}
}

#endif // maxjia
