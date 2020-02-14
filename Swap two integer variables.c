//1.给定两个整型变量,将两个值的内容进行交换
//2.不允许创建临时变量,交换两个数的内容
//第一种

#include<stdio.h>
#include<stdlib.h>

int f21() {
	int a = 5, b = 6;

	printf("a=%d,b=%d\n", a, b);
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}

//第二种
int f22() {
	int a = 5, b = 6;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d\n",a,b);
	system("pause");
	return 0;
}











