//在屏幕上输出九九乘法表
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f5() {
	int n = 9;

	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d\t", j, i, i*j);
		}
		putchar('\n');
	}


	system("pause");
	return 0;
}



//打印菱形星星(不仅要打星星 还要打空格)
//找星星和空格的通项式

int f6() {
	int i, j;
	int n = 5;
	//n是行
	for (i = 1; i < n; i++) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n; i > 0; i--) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}
