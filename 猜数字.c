#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a;


srand(time(0));
int b = rand() % 100;   // 0~99
	int c = 1;
	int d = 100;
	printf("猜数字1-100\n");
	do {
		scanf("%d", &a);
		if (a != b) {
			if (a > b) {
				printf("哈哈猜错了吧答案在%d-%d\n", c, a);
				d = a;
			}
			else {
				printf("哈哈猜错了吧答案在%d-%d\n", a, d);
				c = a;
			}

		}
		else printf("真聪明，你猜对了");
	} while (a != b);
	return 0;
}
