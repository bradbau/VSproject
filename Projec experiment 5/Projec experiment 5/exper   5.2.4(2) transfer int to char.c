//#define maxjia
#ifdef maxjia

#include<stdio.h>
void transfer_int_to_char(int x, char *s)
{
	int n, t;
	int i = 0;
	while (*(s + i) = '0' + x % 2, x /= 2)
		++i;
	
	for (n = i; i > n / 2; i--) {
		t = *(s + i);
		*(s + i) = *(s + n - i);
		*(s + n - i) = t;
	}
	*(s + n + 1) = 0;
}
int main()
{
	int x;
	char s[33];
	scanf_s("%d", &x);
	transfer_int_to_char(x, s);
	printf("%s\n", s);
	return 0;
}


#endif 
