//#define maxjia
#ifdef maxjia

#include<stdio.h>
#include<string.h>
int main()
{
	char x, i;
	struct count {
		char a[25];
		int se;
	}num[12];
	int te;
	for (te = 0; te < 12; ++te) {
		memset(num[te].a, 0, sizeof(char) * 25);
		num[te].se = 0;
	}
	while ((i = getchar()) != '#') {
		if (i >= '0'&&i <= '9') {
			num[i - '0'].a[num[i - '0'].se++] = i;
		}
		else if ((i >= 'a'&&i <= 'z') || (i >= 'A'&&i <= 'Z'))
			num[10].a[num[10].se++] = i;
		else if (i == '\n')  continue;//************important hypothesis, that every \n is a symble
		else num[11].se++;

	}
	num[11].se++;
	num[10].se--;
	num[10].a[num[10].se++] = i;
	int p;
	for (p = 0; p < 10; ++p) {
		printf("Number %d: %d\n", p, num[p].se);
	}
	printf("characters: %d  %s\n", num[10].se,num[10].a);
	printf("other: %d\n   %s\n", num[11].se, num[11].a);
	return 0;
}


#endif // maxjia
