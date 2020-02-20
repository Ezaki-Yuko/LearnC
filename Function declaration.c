
//函数的声明和定义

#include<stdio.h>
#include<stdlib.h>
extern double Max(double , double );//函数声明 extern关键字 也可以省略 不建议省略
//声明相当于是一个空头支票 提醒编译器有这样一个函数
#include"calc.h"//不可以改成<calc.h>
//#include< >会在系统目录中查找头文件(编译器安装的相关目录)
//#include""先在当前项目目录中查找,然后再去系统目录中查找
#include"calc.h"//直接调用头文件calc.h
//相当于把.h文件的内容复制粘贴到当前代码位置
//通常情况下,包含标准库头文件,就使用<>,包含自己的头文件就使用""
//第三方库看第三方库装在哪里(项目还是系统)
int main() {
	printf("%f\n", Max(10.0, 20.0));
	system("pause");
	return 0;
}

double Max(double x, double y) {
	if (x > y) {
		return x;
	}
	return y;
}




