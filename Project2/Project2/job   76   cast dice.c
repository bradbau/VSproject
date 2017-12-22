//#define maxjia
#ifdef maxjia


#include<stdio.h>
int getnum(unsigned int x)
{
	int sum=0,i,point=0;
	if (x == 0)
		point = 1;
	for (;x!=0;)
	{
		i = x % 10;
		x /= 10;
		sum += i;
		point = sum % 6 + 1;
	}
    return point;
	
}
int main()
{
	int a, b, state=0,t,n,point,su,i ;//t lines of inout//n marks the game round
	scanf("%d", &t);	
	n = 1;
	
	for (i=1; i<=t; ++i)
	{
		X:;
		if (n==1)
		{
		scanf("%d", &a);

		scanf("%d", &b);

			su = getnum(a + i - 1)+ getnum(b + i- 1);//su=summary
			if (su == 11 || su == 7)
			{
				printf("success!\n");

			}
			else if (su == 2 || su == 3 || su == 12)
			{
				printf("fail!\n");
			}
			else
			{
				point = su;
				n++;
				goto X;
			}
		}
		if (n!=1)
		{
			su = getnum(a + i - 1) + getnum(a + i - 1);
			if (su == point)
			{
				printf("success!\n");
				n = 1;
			}
			if (su == 7)
			{
				printf("fail!\n");
				n = 1;
			}
			else
			{
				point = su;
				n++;
				goto X;
			}
		}
	
	}

}

#endif 



//#define maxjia1
#ifdef maxjia1



#include<stdio.h>
//#pragma warning(disable:4996) 
int sumForStep(int x)
{
	int sum = 0, i, point = 0;
	if (x == 0)
		point = 1;
	for (; x != 0;)
	{
		i = x % 10;
		x /= 10;
		sum += i;
		point = sum % 6 + 1;
	}
	return point;
}
int main()
{
	int loop = 0, count;
	scanf("%d", &count);
	for (loop; loop < count; loop++) {
		int num_1, num_2, sum;
		scanf("%d %d", &num_1, &num_2);

		sum = sumForStep(num_1) + sumForStep(num_2);
		if (sum == 7 || sum == 11) {
			printf("success!\n");
			continue;
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			printf("fail!\n");
			continue;
		}
		else {
			;
		}
		int loop_1 = 2;
		int _num_1, _num_2, _sum = sum;
		while (_sum != 7) {
			_num_1 = num_1 + loop_1 - 1;
			_num_2 = num_2 + loop_1 - 1;
			++loop_1;
			_sum = sumForStep(_num_1) + sumForStep(_num_2);
			if (_sum == sum) {
				printf("success!\n");
				break;
			}
		}
		if (_sum == 7) {
			printf("fail!\n");
		}

	}
	//system("pause");
	return 0;
}


#endif 