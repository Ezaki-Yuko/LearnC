//递归
/*
#include<stdio.h>
#include<stdlib.h>
void PrintNum(int num) {
	if (num > 9) {
		PrintNum(num/10);//调用自己
		//回到调用位置继续往下执行
	}
	printf("%d", num % 10);
}
int main() {
	PrintNum(1234);
	system("pause");
	return 0;
}
//调试器中有一个很重要的窗口"调用堆栈/调用栈"就记录了当前函数和函数之间的调用关系
*/