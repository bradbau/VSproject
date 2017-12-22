
//huge winning from reliance to independence analyze 
//#define maxjia
#ifdef maxjia


#include<stdio.h>
void scpy(char *x, char *s,int k)
{
	int i = 0;
	while ((*(s + i) = *(x + i)) != '\n' && i <k)//two different poeition, two kinds of k (or k-1)
		++i;
	*(s + i) = 0;
	return;
}
int main()
{
	int n,k;
	char an[100], sn[100] ,*a=an, *s=sn;
	scanf_s("%d", &n);//**********
	
	while (n--) {
		int p = 0;
		getchar();//*********@@@@position of getchar ,determine the whole process
		while ((*(a + p++) = getchar()) != '\n');
		scanf_s("%d", &k);//***********
		scpy( a, s, k);
		p = 0;
		while (*(s + p) !=0)
		      printf("%c", *(s + p++));
		
		printf("\n");
	}
	return 0;
}
#endif // maxjia
