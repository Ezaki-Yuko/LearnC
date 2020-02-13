//将三个数按从大到小输出.
//三次交换 冒泡
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int f17() {
	int a;
	int b;
	int c;
	//%d十进制 %x十六进制 %o十进制
	scanf("%d%d%d", &a, &b, &c);
	int temp;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b < c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}

