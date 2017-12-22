#define maxjia
#ifdef maxjia


#include <stdio.h>  
#include <stdlib.h>  
int count;
//�ݹ鷨ʵ�ְ˻ʺ�����  

//����row��ʾ��ʼ�У�����n��ʾ����  
//����(*chess)[8]��ʾָ������ÿһ�е�ָ�� 

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
	//�ж��з���  
	for (i = 0; i<8; i++) {
		if (*(*(chess + i) + colomn) == 1) {//��һ���Ѵ��ڻʺ�  
			return 0;
		}
	}
	//�ж����Ϸ�  
	for (i = row, k = colomn; i >= 0 && k >= 0; i--, k--) {
		if (*(*(chess + i) + k) == 1) {
			return 0;
		}
	}
	
	//�ж����Ϸ�  
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
		printf("��%d�֣�\n", ++count);
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
		//�ж����λ���Ƿ���Σ��  
		//�����Σ�գ��Ǽ�������  
		for (j = 0; j<n; j++) {
			if (notdanger(row, j, chess)) {//�ж��Ƿ�Σ��  
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
	initialize(chess);//��ʼ������Ϊ0  
	eightqueen(0, 8, chess);//�ӵ�0�п�ʼ��������Ϊ��λ����  
	return 0;
}


#endif // maxjia
