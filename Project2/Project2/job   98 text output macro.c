//#define maxjia
#ifdef maxjia

//******************这个结构不好，看下面
#include<stdio.h>
#define CHANGE a[0]%2
int main()
{
	char a[30];
	int n, i;
	scanf("%d", &n);
	while (n--) {
		getchar();
/*		for (i = -1; a[i] = getchar() != '\n'; ++i);
		t = i;
*/		
		scanf("%s", a);
		switch (CHANGE) {
		case 0:printf("%s\n", a);
			break;
		case 1:
			for (i = 0; a[i]!=0; ++i) {
				if (a[i] >= 'a'&&a[i] <= 'z') a[i] += 'A' - 'a';
				else if (a[i] >= 'A'&&a[i] <= 'Z') a[i] += 'a' - 'A';
			}
			printf("%s\n", a);
		}
	}
	return 0;
}




#endif

#define maxjia1
#ifdef maxjia1


#include<stdio.h>
#define CHANGE a[0]%2
int main()
{
	char a[30];
	int n, i;
	scanf("%d", &n);//n为输入数据组数
	getchar();
	while (n--) {

		for (i = 0; (a[i] = getchar()) != '\n'; ++i);
		switch (CHANGE) {
		case 0:
			for (i = 0; a[i] != '\n'; ++i) {
				printf("%c", a[i]);
			}
			printf("\n");
			break;
		case 1:
			for (i = 0; a[i] != 0; ++i) {
				if (a[i] >= 'a'&&a[i] <= 'z') a[i] += 'A' - 'a';
				else if (a[i] >= 'A'&&a[i] <= 'Z') a[i] += 'a' - 'A';
			}
			for (i = 0; a[i] != '\n'; ++i) {
				printf("%c", a[i]);
			}
			printf("\n");
		}
	}
	return 0;
}


#endif
