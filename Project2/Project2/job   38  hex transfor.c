//#define maxjia
#ifdef maxjia




#include<stdio.h>

int main()//succeed for 1 round
{
	int n,v,p,i;
	char a[40];
	scanf("%d", &n);
	getchar();
	for (; n > 0; --n) {
		for (i = 0; i < 40; ++i) {
			if (scanf("%c", &a[i]) == ' '||a[i]=='\n')
				break;
		}//i =number of char
		for (--i,p=1,v=0; i > 1; --i) {
			if(a[i]>='0'&&a[i]<='9') v += ((int)a[i]-48) * p;
			if (a[i] >= 'a'&&a[i] <= 'z') v += ((int)a[i] - 'a'+10)*p;
			if (a[i] >= 'A'&&a[i] <= 'Z') v += ((int)a[i] - 'A'+10)*p;
			p *= 16;
		}
		printf("%d\n", v);
	}




	}
#endif // maxjia