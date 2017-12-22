//#define maxjia
#ifdef maxjia

#include<malloc.h>
#include<stdio.h>
typedef struct node {
			char a;
			struct node * next;
		}node;
int main()
{
			node * head, * p;
			char c, *s;
			int i = 0, n;
			while ((c = getchar()) != '#') {
				if (i == 0)
					head = p = (node *)malloc(sizeof(node));
				else {
					p->next = (node *)malloc(sizeof(node));
					p = p->next;
				}
				p->a = c;
				i++;
			}
			n = i;
			
			s = (char *)malloc(sizeof(char)*(i + 1));
			for (p = head, i = 0; i<n; p=p->next, ++i) {
				printf("%c", p->a);
				*(s + i) = p->a;
			}
			*(s + i) = 0;
			printf("\n\n");
			*(s + i) = 0;
			printf("%s\n", s);
			return 0;

		}

#endif // maxjia
