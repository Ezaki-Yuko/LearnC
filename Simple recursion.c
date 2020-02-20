//函数的递归
//一个函数也能调用自己.概念简单,实际代码执行过程中可能会比较复杂
//函数的调用的执行过程 
//函数调用就会进入到函数体内部执行,遇到return语句,函数就结束了,回到调用位置继续执行
//写一个函数,接受一个整型值(无符号整数),按照顺序打印它的每一位.
#include<stdio.h>
#include<stdlib.h>
void PrintNum(unsigned int num) {
	if (num > 9) {
		PrintNum(num / 10);
	}
	//if没有else如果if不成立就没有别的分支直接继续下面别的语句了
	printf("%d\n", num % 10);
}

int main() {
	PrintNum(1234);
	system("pause");
	return 0;
}

