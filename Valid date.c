
//判断1000年--2000年之间的闰年
//复杂逻辑的写法
//闰年:公历年份是4的倍数且不是100的倍数，或者公历年份是整百数的，且是400的倍数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f2() {

	int y = 1900;
	//判断闰年
	if (y % 400 == 0 ||
		y % 100!0 && y % 4 == 0)
	{
		printf("%d", y);
	}
	system("pause");
	return 0;
}


//判断一个日期是否合法

int f3() {

	int y = 0;
	int m = 0;
	int d = 0;

	scanf("%d%d%d", &y, &m, &d);

	int flag = 0;

	if (y % 400 == 0 ||
		y % 100 != 0 && y % 4 == 0)
	{
		flag = 1;
	}
	if (d > 31 || m > 12 || d < 1 || m < 1 ||
		(m == 4 || m == 6 || m == 9 || m == 11) && d>30 ||
		(m == 2) && d>28 + flag || y < 1)
	{
		printf("不合法\n");
	}
	else {
		printf("合法\n");
	}
	system("pause");
	return 0;
}

