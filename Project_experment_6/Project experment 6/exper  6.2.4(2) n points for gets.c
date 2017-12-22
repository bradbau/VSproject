//#define max
#ifdef max

#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef char buffer[81];
void compact_space(char *p, int l);

int main()
{
	
	int x, i, n;
	scanf("%d", &n);
	getchar();
	char **p=(char  **)malloc(sizeof(buffer *)*n);
	for (i = 0; i < n; ++i) {
		p[i] = malloc(sizeof(buffer));
		gets_s(p[i], 80);
	}
	for (i = 0; i < n; ++i) {
		compact_space(p[i], 80);

	}
	int j;
	for (i = 0; i < n; ++i) {
		
		printf("%s\n", p[i]);
		for (j = 0; j < 80; ++j) {
			printf("%c", p[i][j]);
		}
	}
	return 0;
}

void compact_space(char *p, int l)
{
	char *st = (char *)malloc(sizeof(char)*l);
	int i = 0, j = 0, state = 0;
	while (*(p + i)) {
		if (state == 1 && *(p + i) == 32) {
			++i;
			continue;
		}
		if (state == 1 && *(p + i) != 32) {
			state = 0;
			*(st + j) = *(p + i);
		}
		if (*(p + i) == 32 && state == 0) {
			*(st + j) = *(p + i);
			state = 1;
		}
		else *(st + j) = *(p + i);
		++i;
		++j;
	}
	memset(p, 0, l);
	for (i = 0; *(st + i); ++i) {
		*(p + i) = *(st + i);
	}
	p[60] = 0;
}

#endif