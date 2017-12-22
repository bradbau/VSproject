#define maxjia
#ifdef maxjia


#include <stdio.h>  
#include <stdlib.h>  
int count;
//递归法实现八皇后问题  

//参数row表示起始行，参数n表示列数  
//参数(*chess)[8]表示指向棋盘每一行的指针 

void initialize(int a[8][8])
{
	int i, j;
	for (i = 0; i < 8; ++i) {
		for (j = 0; j < 8; ++j)
			a[i][j] = 0;
	}
	return;
}


int notdanger(int row, int colomn, int(*chess)[8]) {
	int i, k;
	//判断列方向  
	for (i = 0; i<8; i++) {
		if (*(*(chess + i) + colomn) == 1) {//这一列已存在皇后  
			return 0;
		}
	}
	//判断左上方  
	for (i = row, k = colomn; i >= 0 && k >= 0; i--, k--) {
		if (*(*(chess + i) + k) == 1) {
			return 0;
		}
	}
	
	//判断右上方  
	for (i = row, k = colomn; i >= 0 && k<8; i--, k++) {
		if (*(*(chess + i) + k) == 1) {
			return 0;
		}
	}
	return 1;
}

void eightqueen(int row, int n, int(*chess)[8]) {
	int chess2[8][8], i, j;
	for (i = 0; i<8; i++) {
		for (j = 0; j<8; j++) {
			chess2[i][j] = chess[i][j];
		}
	}
	if (row == 8) {
		printf("第%d种：\n", ++count);
		for (i = 0; i<8; i++) {
			for (j = 0; j<8; j++) {
				if (*(*(chess2 + i) + j))
					printf("QU");
				else printf("/\\");
			}
			printf("\n");
		}
	}
	else {
		//判断这个位置是否有危险  
		//如果有危险，那继续往下  
		for (j = 0; j<n; j++) {
			if (notdanger(row, j, chess)) {//判断是否危险  
				for (i = 0; i<8; i++) {
					*(*(chess2 + row) + i) = 0;
				}
				*(*(chess2 + row) + j) = 1;
				eightqueen(row + 1, n, chess2);
			}
		}
	}
}

int main()
{
	int chess[8][8];
	int i, j;
	initialize(chess);//初始化棋盘为0  
	eightqueen(0, 8, chess);//从第0行开始依次以行为单位遍历  
	return 0;
}


#endif // maxjia
