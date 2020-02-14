//求10个整数的最大值
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int f18() {
	int Max = 0;
	int temp = 0;
	int i;
	for (i = 0; i < 10; i++) {
		//scanf遇到空格就当此次输入结束，
		//虽然我们输入数据时是一次性输入多个数据，他们用空格隔开
		scanf("%d", &temp);
		if (i == 0) {
			Max = temp;
		}
		else if (temp > Max) {
			Max = temp;
		}

	}
	printf("%d\n", Max);
	return 0;
}

//第二种
int f19()
{
	int num = 0;
	int max = num;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
		}
	}
	printf("max=%d\n", max);
}

//求十个整数次大值

int f20() {
	int max = 0x80000000;
	int next = 0x80000000;
	int temp = 0;

	int i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &temp);
		if (temp > max) {
			next = max;
			max = temp;
		}
		else if (temp > next&&temp != max) {
			next = temp;
		}
	}
	if (next == 0x80000000) {
		printf("十个数均相等,不存在次大值!\n");
	}
	else {
		printf("%d\n", next);
	}
	system("pause");
	return 0;
}
