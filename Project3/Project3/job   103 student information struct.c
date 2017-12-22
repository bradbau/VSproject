//#define maxjia
#ifdef maxjia

#include<stdio.h>
int main()
{
	struct Student { 
		int num;
		char name[19];
		double score;
	}s[3], *p=&s[0] ;
	int n, i;
	scanf("%d", &n);
	while (n--) {
		p = &s[0];//为什么又访问冲突，因为指针乱指呀
		for (i = 0; i < 3; ++i) {
			scanf("%d %s %lf", &s[i].num, s[i].name, &s[i].score);
		}
		for (i = 0; i < 3; ++i) {
			printf("%d\t%-20s%lf\n", s[i].num, s[i].name, s[i].score);
		}
		for (i = 0; i < 3; ++i, ++p) {
			printf("%d\t%-20s%lf\n", p->num, p->name, p->score);
		}
	}
	return 0;
}

#endif