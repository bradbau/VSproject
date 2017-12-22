//#define maxjia
#ifdef maxjia


#include<stdio.h>
typedef struct day {
	int year;
	int month;
	int date;
}day;

int main()
{
	int n, i, deter, num;
	int dom[2][12] = { 31,29,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	day d;
	scanf_s("%d", &n);
	while (--n) {//error fencepost
		scanf_s("%d", &d.year);
		scanf_s("%d", &d.month);
		scanf_s("%d", &d.date);
		if (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0))
			deter = 0;
		else deter = 1;
		for (i = 0, num=0; i < d.month-1; ++i) {
			num += dom[deter][i];
		}
		num += d.date;
		printf("%d\n", num);
	}
	return 0;
}



#endif // maxjia
