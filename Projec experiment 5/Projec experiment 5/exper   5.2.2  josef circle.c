//#define maxjia
#ifdef maxjia

#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
	int a[M], b[M];	/* 数组a存放圈中人的编号，数组b存放出圈人的编号 */
	int i, j, k, nu;
	for (i = 0; i < M; i++)	/* 对圈中人按顺序编号1—M */
		a[i] = i + 1;
	for (i = M, j = 0; i > 1; i--) {
		/* i表示圈中人个数，初始为M个，剩1个人时结束循环；
		j表示当前报数人的位置    */
		for (k = 1; k <= N; k++,j++)	/* 1至N报数 */
			if (j > i - 1) j = 0;/* 最后一个人报数后第一个接着报，形成一个圈 */
		j--;
		b[M - i] = j ?  a[j] :  1;	/* 将报数为N的人的编号存入数组b */
		if (1)
			for (k = j; k < i; k++)	/* 压缩数组a，使报数为N的人出圈 */
				a[k] = a[k + 1];
	}
	for (i = 0; i < M - 1; i++)		/* 按次序输出出圈人的编号 */
	printf(" % 6d", b[i]);
	printf(" % 6d\n", a[0]);			/* 输出圈中最后一个人的编号 */
	return 0;
}



#endif

//#define alt
#ifdef alt
#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
	int a[M], b[M];              	/* 数组a的下标即为人的编号减一，存储内容为0或1,1代表还在圈中，0代表已出圈*/
	int i, j, k;
	for (i = 0; i < M; i++)           	/* 对圈中人赋初始状态1 */
		a[i] = 1;
	for (i = M, j = 0; i > 1; i--) {
		                              // i表示圈中人个数，初始为M个，剩1个人时结束循环；
		j--;                             //j表示当前报数人的位置 ,from 0   
		for (k = 1; k <= N; k++, ++j) {/* 1至N报数 */
			while (a[j] == 0) {
				++j;                        //跳过出圈人
				if (j > i - 1) j = 0;      /* 最后一个人报数后第一个接着报，形成一个圈 */
			   }
			}
		a[j] = 0;                       //令位置为j的人出圈
		b[M - i] = j+1;                /* 将报数为N的人的编号存入数组b */
	   }
	for (i = 0; i < M - 1; i++)		/* 按次序输出出圈人的编号 */
		printf(" % 6d\n", b[i]);
	printf(" % 6d\n", a[0]);			/* 输出圈中最后一个人的编号 */
	return 0;
}



#endif // alt
