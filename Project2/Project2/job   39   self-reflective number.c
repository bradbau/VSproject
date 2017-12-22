//#define maxjia
#ifdef maxjia

#include<stdio.h>

int SR_judge(char *p ,int x)
{
	int state;
	
	if (*(p) == *(p + x ))
	{
		state=SR_judge(p + 1, x - 2);
	}
	else return 0;
    if (1 >= x / 2 ) return 1;
	
		return state;
}
int main()
{
	unsigned int n,re;

	char a[30];
	if (scanf("%u", &n) == 0) {
		printf("error");
		return 0;
	}
	getchar();
	for (; n > 0; --n) {
		int i=0;	
		while ((*(a+i)=getchar())!='\n')
			++i;
		--i;
		re = SR_judge(a, i);
		if (re == 1) printf("Yes!\n");
        else printf("No!\n");
	}
	return 0;
}
#endif // maxjia
