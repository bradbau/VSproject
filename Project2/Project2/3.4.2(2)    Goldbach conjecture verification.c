//#define maxjia
#ifdef maxjia


#include<stdio.h>
#include<math.h>

int prime_number_decide(int n)
{
	int i, p=1;
	for (i = 2; i>=2 && i <= sqrt((double)n); ++i){
		if (n%i == 0) {
			p = 0;
			break;
		}	
	}
	return p;
}

int main()
{
	int  odd, i, be, end;
	while (scanf_s("%d %d",&be, &end)) {
		if (be == 0)return 0;
		for (odd = ((be+1) / 2) * 2; odd <= (end / 2) * 2; odd += 2) {
			//   exam each odd number 
			if (odd == 2)printf("2=1+1\n");
			for (i = 2; i <= odd / 2; ++i) {
				if (prime_number_decide(i)) {
					if (prime_number_decide(odd - i)) {
						printf("%d=%d+%d\n", odd, i, odd - i);
						break;
					}
				}
				//  where to put the wrong output
			}
		}
		printf("\n");
	}
	return 0;
}


#endif // maxjia
