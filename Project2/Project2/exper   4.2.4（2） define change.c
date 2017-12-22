//#define maxjia
#ifdef maxjia



#include<stdio.h>
#define CHANGE 1
int main()
{
	char a[30];
	int  i;

		for (i = 0; (a[i] = getchar()) != '\n'; ++i);
#if CHANGE==0
			for (i = 0; a[i] != '\n'; ++i) {
				printf("%c", a[i]);
			}
			printf("\n");
#endif
#if CHANGE==1
			for (i = 0; a[i] != 0; ++i) {
				if (a[i] >= 'a'&&a[i] <= 'z') a[i] += 'A' - 'a';
				else if (a[i] >= 'A'&&a[i] <= 'Z') a[i] += 'a' - 'A';
			}
			for (i = 0; a[i] != '\n'; ++i) {
				printf("%c", a[i]);
			}
			printf("\n");
#endif

	return 0;
}


#endif // maxjia