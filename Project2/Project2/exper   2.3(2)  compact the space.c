//#define maxjia
#ifdef maxjia

#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[30],p;
	int i;
	for (i = 0;; ++i) {
		if ((a[i] = getchar()) == ' '){
			while ((p = getchar()) == ' ');
			a[++i] = p;
		}
		if (a[i] == '\n')
			break;
	}
	for (i = 0;; ++i) {
		if (a[i] == '\n')
			break;
		printf("%c", a[i]);
		
	}
	printf("\n");
	getchar();
	system("pause");
	return 0;
}


#endif