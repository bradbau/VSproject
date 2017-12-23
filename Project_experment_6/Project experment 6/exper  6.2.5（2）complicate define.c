//#define maxjia
#ifdef maxjia

#include<stdio.h>
#include<string.h>
char *(*p[2])(const char *, const char *);
char *winner1(const char *x, const char *y);
char *loser2(const char *x, const char *y);
int main()
{
	int i;
	char  members[4][10], *winner[2];
	p[0] = winner1;
	p[1] = loser2;
	printf("who's name is bigger?\n");
	for (i = 0; i < 4; ++i) {
		scanf("%s", members[i]);
	}
	winner[0] = p[0](members, members + 1);
	winner[1] = p[1](members + 2, members + 3);
	if (!winner[0]) printf("no winner in group1.\n");
	else	printf("winner of group1 is:%s\n", winner[0]);
	if (!winner[1])printf("no winner in group2.\n ");
	else	printf("loser of group2 is:%s\n", winner[1]);
	return 0;
}
char *winner1(const char *x, const char *y)
{
	int state;
	state = strcmp(x, y);
	if (state > 0)return x;
	if (state < 0)return y;
	else return 0;
}
char *loser2(const char *x, const char *y)
{
	int state;
	state = strcmp(x, y);
	if (state < 0)return x;
	if (state > 0)return y;
	else return 0;
}

#endif