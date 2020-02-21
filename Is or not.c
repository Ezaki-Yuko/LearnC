
//练习 写一个代码判断一个数是不是素数
//素数在计算机中有非常重大的作用
//如果拿两个很大的素数相乘,得到另外一个很大的数,这个过程很容易
//如果把一个很大的数因式分解成两个很大的素数很难
#include<stdio.h>
#include<stdlib.h>
//如果返回1就认为是素数,如果返回0就不是素数
int IsPrime(int num) {
	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 0;
	}
	//简单粗暴的,找一下num能被哪些数整除
	//找反例
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			return 0;
		}

	}
	return 1;
}

int main() {
	printf("%d\n", IsPrime(99));

	system("pause");
	return 0;
}
//写一个代码判断一年是不是闰年
//世纪闰年 普通闰年
#include<stdio.h>
#include<stdlib.h>
int IsLeapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0) {
		return 1;
	}
	else if (year % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	printf("%d\n", IsLeapYear(2020));
	system("pause");
	return 0;

}

//函数的嵌套
//函数的链式访问 一个函数的返回值作为另一个函数的参数
