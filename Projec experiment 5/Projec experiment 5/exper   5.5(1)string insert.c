//#define maxjia
#ifdef maxjia

#include<stdio.h>
void stmins(char *s, char *t, int n)
{
	int ls=0, lt=0, i;
	while (*(s + ls++));
	while (*(t + lt++));
	ls--, lt--;//ls,lt =length of string s and string t
	for (i = ls-1 ; i >= n; --i) {
		*(s + i + lt ) = *(s + i);
	}
	for (i = 0; i < lt; ++i) {
		*(s + n + i) = *(t + i);
	}
	*(s + ls + lt - 1) = 0;
	return;

}
int main()
{
	char s[50], t[20];
	int n;
	scanf("%s", s);
	scanf("%s", t);
	scanf("%d", &n);
	stmins(s, t, n);
	printf("%s\n", s);
	return 0;
}




#endif // maxjia
