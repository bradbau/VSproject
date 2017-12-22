//#define maxjia
#ifdef maxjia


#include<stdlib.h>
#include<stdio.h>
void againmalloc(struct List *L);
void input(void);

int main()
{
	
}


void input()
{

}

void againmalloc(struct List *L)
{
	int *p = realloc(L->list, 2*L->stdsize* sizeof(int));
	if (!p)
	{
		printf("insufficient storage\n");
		exit(1);
	}
	L->list = p;
	L->stdsize = 2 * L->stdsize;
}




#endif // maxjia


//#define test1
#ifdef test1


#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#define STDLEN 20
void erp()
{
	printf("illegal iuput!\n");
	exit;
}

int main()
{
	char *a;
	int i=0,c=0;
	for (i = 0; i <= 20; ++i) {
		if(scanf("%c", a + c*STDLEN + i)=='\n') break;
		if (*(a + c*STDLEN + i) < '0' || *(a + c*STDLEN + i) > '9') {//end or error
			if (*(a + c*STDLEN + i) != ' ')   erp();
			break;
		}
		else if (i == 20) {
			++c;
			a = (char *)calloc((c + 1)*STDLEN, sizeof(char));
			if (c > 10)   void erp();

		}
	}

}
#endif // test1



//#define test2
#ifdef test2
#include<ctype.h>
#include<stdio.h>
#include<string.h>
void erp()
{
	printf("illegal iuput!\n");
}
int main()
{
	char a[100], b[100], sum[101], mid;
	memset(a, 0, sizeof(char) * 100);
	memset(b, 0, sizeof(char) * 100);
	memset(sum, 0, sizeof(char) * 101);
	int i, n, al, bl;

	for (i = 0; i <= 100; i++) {
		if (i == 100) {
			printf("The first number exceed the limit");
			return -1;
		}//                                           //overflow examination
		a[i] = getchar();
		
		 if (a[i]<'0' || a[i]>'9') {
			 if(a[i] == ' '||a[i]=='\n' ) {
				 al = i;   //a1==length
				 a[i] = 0;
				 break;
		      }
			 else {
				 void erp();
				 return 0;
			 }
		 }
	}

	for (n = 0; n != i && n != i - 1; ++n, --i) {
		mid = a[n];
		a[n] = a[i];
		a[i] = mid;
	}
	for (i = 0; i <= 100; i++) {
		if (i == 100) {
			printf("The first number exceed the limit");
			return -1;
		}
		b[i] = getchar();

		if (b[i]<'0' || b[i]>'9') {
			if (b[i] == ' ' || b[i] == '\n') {
				bl = i;
				break;
			}
			else {
				void erp();
				return 0;
			}
		}
	}
	for (n = 0; n != i && n != i - 1; ++n, --i) {
		mid = b[n];
		b[n] = b[i];
		b[i] = mid;
	}
/*	for (i = 0; i < 100; ++i) {//********************

		printf("%c", a[i]);
	}
	printf("\n");
	for (i = 0; i < 100; ++i) {
		printf("%c", b[i]);
	}
	printf("\n");
	system("pause");//*************test */


	//*************  start the calculate part
	int resu, as=0, p;
	if (al >= bl)n = al;
	else n = bl;//i,n  freed
	for (i = 0; i <= n; ++i) {
		resu = a[i] - '0' + b[i] - '0';
		sum[i] = resu % 10 + as + '0';
		as = resu / 10;
	}
	for (i = n - 1; i >= 0; --i) {
		printf("%c", sum[i]);
	}
	printf("\n");
	return 0;

}

#endif // test2


