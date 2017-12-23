//#define maxj
#ifdef maxj


#include<stdio.h>
#include<stdlib.h>
void readd(char x[], char y[]);
void plus(char *a, char *b, char *re);
void resemble(char *re, char so[]);
int main()
{
	char a[31], b[31], re[32], so[32];
	
	scanf("%s", re);
	readd(a, re);
	scanf("%s", re);
	readd(b, re);
	memset(re, 0, 32);
	plus(a, b, re);
	resemble(re, so);
	printf("%s", so);
	return 0;
}
	
void readd(char x[], char y[])
{
	int i, j;
	for (i = 0, j=30; i < 31&&j>=0;++i, --j ) {
		if (*(y + j) < '0'||*(y+j)>'9') {
			--i;
			continue;
		}
		else x[i] = *(y + j);
	}
}

void plus(char *a, char *b, char *re)
{
	int bit, i, j, carry;
	for (i = 0, carry=0; i < 30; ++i) {
		bit = *(a + i) - '0' + *(b + i) - '0';
		*(re + i) =( bit + carry)%10+'0';
		carry = 0;
		if ((bit+ carry) > 9) 
			carry = 1;
	}
	if (carry == 1) *(re + i) = '1';
	*(re + i + 1) = 0;
}

void resemble(char *re, char so[])
{
	int i=0, j;
	while (*(re + ++i));
	i--;
	for (j=0;i>=0;++j, --i ) {
		*(so + j) = *(re + i);
		if (i == 10) 
			*(so + ++j) = '.';
	}
	*(so + j) = 0;
}

#endif // max
