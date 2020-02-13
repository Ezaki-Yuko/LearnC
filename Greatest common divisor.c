//求两个数的最大公约数
//普通(一般)算法 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int f15() {
	int a, b;
	int max;
	scanf("%d%d", &a, &b);
	//条件运算符 三目运算符
	int smaller = a < b ? a : b;
	int i;
	for (i = 1; i < smaller; i++) {
		if (a%i == 0 && b%i == 0) {
			max = i;
		}
	}

	printf("max=%d\n", max);
	system("pause");
	return 0;
}


//特殊算法:欧几里得算法 辗转相除法 当余数为零的时候跳出 被除数为最大公约数


int f16() {
	int a, b;
	int max;

	scanf("%d%d", &a, &b);
	int c;

	c = a % b;
	while (c) {
		a = b;
		b = c;
		c = a % b;
	}

	printf("max=%d\n", b);
	system("pause");
	return 0;

}
