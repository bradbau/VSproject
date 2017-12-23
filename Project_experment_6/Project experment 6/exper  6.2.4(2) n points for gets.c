//#define maxj
#ifdef maxj

#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef char buffer[81];
int compact_space(char *p, int l);

int main()
{
	
	int x, i, n, *len;
	scanf("%d", &n);
	getchar();
	len = (int *)malloc(sizeof(int)*n);
	char **p=(char  **)malloc(sizeof(buffer *)*n);
	for (i = 0; i < n; ++i) {
		p[i] = malloc(sizeof(buffer));
		gets_s(p[i], 80);
	}
	for (i = 0; i < n; ++i) {
		len[i]=compact_space(p[i], 80);
		p[i][len[i]] = 0;
	}
	for (i = 0; i < n; ++i) 
		printf("%s\n", p[i]);
	return 0;
}

int compact_space(char *p, int l)
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
	int length;
	length = j;
	for (i = 0; *(st + i); ++i) {
		*(p + i) = *(st + i);
	}
	return length;
}

#endif