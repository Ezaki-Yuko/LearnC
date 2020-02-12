//数位遍历 遍历数字中每一个数位
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int f7() {
	int n = 123456;

	int i;
	for (i = n; i; i /= 10)//数位遍历
	{
		printf("%d ", i % 10);
	}
	system("pause");
	return 0;
}


//判断一个数m进制下是不是回归数 例如12321就是回归数
//可以将数字逆序输出 判断与输入的数字是否相等 

int f8() {
	int n = 1234;
	int m = 8;//进制数
	int i;

	int sum = 0;
	for (i = n; i; i /= m)//数位遍历
		//除10 代表是十进制数下的
	{
		sum = sum * m + i % m;
		//i%m可以完成对n在m进制下每一位的遍历
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}

//编写出程序数一下1到100的所有整数中出现多少个数字9.

int f9() {

	int i;
	int count = 0;

	for (i = 0; i <= 100; i++)

	{
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}

	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

//水仙花数,1N位数,其各个数之N次方和等于该数
//先写一个三位数的

int f10() {
	int i;
	int a, b, c;
	for (i = 100; 1 < 1000; i++)
	{
		a = i % 10;
		b = 1 / 10 % 10;
		c = 1 / 100;

		if (i == a * a*a + b * b*b + c * c*c) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}

//遍历输出很多位的水仙花数

int f11() {
	int i;
	int addflag = 10;
	int n = 1;
	int sum = 0, j;

	for (i = 1; 1 < 100000000; i++)
		//几次方不固定
	{
		if (i == addflag)
		{
			n++;
			addflag *= 10;
		}
		for (j = i; j; j /= 10) {
			sum += pow(j % 10, n);
		}
		if (sum == i) {
			printf("%d\n", sum);
		}
		sum = 0;
	}
	system("pause");
	return 0;
}
