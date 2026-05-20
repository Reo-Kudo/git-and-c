#include <stdio.h>

int main() {

	printf("1+1=%d\n", 2);
	printf("5-3=%d\n",5-3);
	printf("3*2=%d\n",3*2);
	printf("5/2=%d\n", 5/2);
	printf("5%%2=%d\n", 5 % 2);

	printf("1.5+1.4=%d\n", 1.5+1.4);
	printf("1.5+1.4=%f\n", 1.5+1.4);

	printf("3+3=%d\n", 3+3);
	printf("3+3=%3d\n", 3+3);
	printf("1.5+1.4=%.2f\n", 1.5 + 1.4);
	printf("1.5+1.4=%2.2f\n", 1.5 + 1.4);
	printf("1.5+1.4=%4.2f\n", 1.5 + 1.4);
	printf("1.5+1.4=%5.2f\n", 1.5 + 1.4);
	printf("1.5+1.4=%6.2f\n", 1.5 + 1.4);

	return 0;
}