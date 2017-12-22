//#define maxjia
#ifdef maxjia

#include<stdio.h>
#define N 5
typedef struct stu{
	char name[19];
	int score;
}stu;

void struct_score_rank(stu *p, int n);
stu *dividing_search(int x, stu *p, int n);

int main()
{
	int  i, x;
	stu per[N], result = {0,0};
	for (i = 0; i < N; ++i) {
		scanf("%s", per[i].name);
		scanf("%d", &per[i].score);
	}
	struct_score_rank(per, N);
	printf("\nhere are the rank:\n");
	for (i = 0; i < N; ++i) {
		printf("%s\t", per[i].name);
		printf("%d\n", per[i].score);
	}
	printf("now search for:");
	scanf("%d", &x);
	result = *dividing_search(x, per, N);
	if ( result.name){
		printf("\n%s\t", result.name);
		printf("%d\n", result.score);
	}
	return 0;
}

void struct_score_rank(stu *p, int n)
{
	int i, j, st;
	stu tem;
	for (i = 0; i < n - 1; ++i) {
		tem = *(p + i);
		for (j = st = i ; j < n ; ++j) {
			if ((p + j)->score > tem.score) {
				tem = *(p + j);
				st = j;
			}
		}
		for (j=st; j > i; --j) {            //tiny mistake makes me exausted   ,i or 0
				*(p + j) = *(p + j - 1);
			}
			*(p + i) = tem;
	}
	
	return;
}

stu *dividing_search(int x, stu *p, int n)//返回score符合条件的stu地址
{
	int i, j;
	int fir=0, mid, last=n;
	mid = (fir + last) / 2;
	while (!((p + mid)->score == x)) {
		if ((p + mid)->score > x)
			fir = mid, mid = (fir + last) / 2;
		else
			last = mid, mid = (fir + last) / 2;
		if (fir == last||fir+1==last) {
			printf("not found!\n");
			exit(1);

		}
	}
	return p + mid;
}
#endif // maxjia
