//#define max
#ifdef max
#include<stdio.h>
int main()
{
	union store {
		long int x;
		struct i {
			unsigned short int xah : 4, xal : 4, xbh : 4, xbl : 4, xch : 4, xcl : 4, xdh : 4, xdl : 4;
		}i;
	} store;
	scanf("%lx", &store.x);
	printf("%lx\n", store.x);
	printf("xah:%x\txal:%x\n", store.i.xah, store.i.xal);
	printf("xbh:%hx\txbl:%hx\n", store.i.xbh, store.i.xbl);
	printf("xch:%hx\txcl:%hx\n", store.i.xch, store.i.xcl);
	printf("xdh:%hx\txdl:%hx\n", store.i.xdh, store.i.xdl);
	return 0;
}

#endif // max
