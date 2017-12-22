//#define maxjia
#ifdef maxjia


#include<stdio.h>
int main()
{
	double x;
	double tax;
	while (1) {
		scanf("%lf", &x);
		if (x == 0) return 0;
		if (0 < x&&x <= 1000) tax = 0.0;
		if (x > 1000 && x <= 2000) tax = 0.05*(x - 1000);
		if (x > 2000 && x <= 3000) tax = 0.1*(x - 2000) + 50;
		if (x > 3000 && x <= 4000) tax = 0.15*(x - 3000) + 150;
		if (x > 4000 && x <= 5000) tax = 0.2*(x - 4000) + 300;
		if (x > 5000) tax = 0.25*(x - 5000) + 500;
        printf("%lf\n", tax);
	}
	
}



#endif // maxjia



//#define test1
#ifdef test1


#include<stdio.h>
int main()
{
	int x, p;
	float tax;
q:printf("please input your salary:");
	scanf("%d", &x);
	if (x < 0) {
		printf("you must be kidding me!\n");
		goto q;
	}
	p = x / 1000;
	switch (p)
	{
	case 0: tax = 0.0;
		break;
	case 1:tax = 0.05*(x - 1000) ;
		break;
	case 2:tax = 0.1*(x - 2000) + 50;
		break;
	case 3: tax = 0.15*(x - 3000) + 150;
		break;
	case 4:tax = 0.2*(x - 4000) + 200;
		break;
	default:tax = 0.25*(x - 5000) + 250;
		break;
	}
	printf("The tax for your salary is %2f.", tax);
	return 0;
}



#endif // test1
