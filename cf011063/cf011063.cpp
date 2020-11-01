#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, b, c, d, x, y, i, j;
void simsalabim() {
	printf("input 2 number a b : ");
	scanf("%d %d", &a, &b);
	x = b + a;
	printf("sum is %d", x);
	printf("\ninput 2 number c d: ");
	scanf("%d %d", &c, &d);
	y = d + c;
	printf("sum is %d", y);

}
int main() {
	simsalabim();
	printf("\nconclude is ..... \n");
	if (x == y) {
		printf("\n a+b = c+d\n");
		if (x <= 0) {
			printf("error");
		}
		else {
			for (i = 0; i <= y; i++) {
				for (j = 0; j <= i; j++) {
					printf("* ");
				}
				printf("\n");
			}
			for (i = 1; i <= y; i++) {
				for (j = y; j >= i; j--) {
					printf("* ");
				}
				printf("\n");
			}
		}
	}
	else if (x != y) {
		if (x > y) {
			if (x <= 0) {
				printf("error");
			}
			else {
				printf("\n a+b > c+d\n");
				for (i = 0; i <= x; i++) {
					for (j = 0; j <= i; j++) {
						printf("* ");
					}
					printf("\n");
				}
				for (i = 1; i <= x; i++) {
					for (j = x; j >= i; j--) {
						printf("* ");
					}
					printf("\n");
				}
			}
		}
		else if (x < y) {
			if (y <= 0) {
				printf("error");
			}
			else {
				printf("\n a+b < c+d\n");
				for (i = 0; i <= y; i++) {
					for (j = 0; j <= i; j++) {
						printf("* ");
					}
					printf("\n");
				}
				for (i = 1; i <= y; i++) {
					for (j = y; j >= i; j--) {
						printf("* ");
					}
					printf("\n");
				}
			}
		}
	}




	return 0;
}