//#define maxjia
#ifdef maxjia


#include<stdio.h>
int main()
{
	int i=0,state;
	char a[20];
	while (1) {
		state = 0;
		i = 0;

		while ((a[i] = getchar()) != '\n')
			++i;
		if (a[0] == '0')  return 0;
		while (--i >= 0) {
			if (state == 0 && a[i] == '0')
				continue;
			printf("%c", a[i]);
			state = 1;
		}
		printf("\n");
	}
	return 0;

}

#endif