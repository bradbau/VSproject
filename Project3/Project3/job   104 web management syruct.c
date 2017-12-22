//#define maxjia//why?排完序后为什么向前移了一位
#ifdef maxjia
#include<stdio.h>
typedef struct webinfo {
	char addr[21];
	char name[41];
	char url[40];
}webinfo;
int string_compare(webinfo * pa, webinfo * pb);

void string_rank_up_in_structure(webinfo *pa, int n);
int main()
{
	
	webinfo *p, *h;
	int n, i;
	scanf("%d", &n);
	h = (webinfo *)malloc(sizeof(webinfo)*n);
	for(i=0, p=h;i<n;++i, ++p){
		scanf("%s %s %s", p->addr, p->name, p->url);
	}
	for (i = 0, p = h; i < n; ++i, ++p) {
		printf("%-20s%-40s%s\n", p->addr, p->name, p->url);
	}
	printf("\n");
	string_rank_up_in_structure(h, n);
	for (i = 0, p = h+1; i < n; ++i, ++p) {
		printf("%-20s%-40s%s\n", p->addr, p->name, p->url);
	}
	return 0;
}
int string_compare(webinfo * pa, webinfo *pb)
{
	int i, j;
	char * p1 = pa->addr, * p2 = pb->addr;
	for (i = 0, j = 0;; i++, j++) {
		if (!*(p1+i)) return 0;
		else if (!*(p2+j)) return 1;
		if (*(p1 + i) < *(p2 + i)) return 0;
		else if (*(p1 + i) > *(p2 + i)) return 1;
	}
}
void string_rank_up_in_structure(webinfo *pa, int n)
{
	webinfo  *point, mid;
	int i, j, state;
	for (i = 0; i < n; ++i ) {
		point = pa;
		for (j = i; j < n; ++j, ++point) {
			state = string_compare(point, point + 1);
			if (state) {
				mid = *point;
				*point =*( point + 1);
				*(point + 1) = mid;
			}
		}
		
			
		
		
	}
}

#endif // maxjia
