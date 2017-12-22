//#define maxjia
#ifdef maxjia


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP  100   
#define NUMBER  '0'
#define MAXVAL 100
#define BUFSIZE 100

int getop(char[]);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
char buf[BUFSIZE];
int bufp = 0;

int main()
{
	int type;
	double op2;
	char s[MAXOP];
	//������ʽ��buf
	scanf_s("%s", buf);

	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			push(pop() - pop());
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() / op2);
			else
				printf("error: zero divisor\n");
			break;
		default:
			printf("error: unknown command %s\n", s);

		}
	}
	return 0;
}


int sp = 0;
double val[MAXVAL];


//����һ�����ݵ�valջ����ջָ��spָ�򶥲�
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

//����valջ��Ԫ�أ�spָ����һ��
double pop(void) {
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

//
int getop(char s[]) {
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t');
	s[1] = '\0';//buf����c��s[0]��c��Ϊ������s[1]Ϊnull
	if (!isdigit(c) && c != '.')
		return c;//c�������֣��㣬����c
	i = 0;
	if (isdigit(c))//c�����֣�ѭ����ȡbuf�е����ֵ�s
		while (isdigit(s[++i] = c = getch()));
	if (c == '.')
		while (isdigit(s[++i] = c = getch()));
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}


//��ȡbuf��Ԫ�أ���Ԫ�������Ļ����
int getch(void) {
	return (bufp > 0) ? buf[--bufp] : getchar();
}

//��c����buf����bufp����
void ungetch(int c) {
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}


#endif // maxjia