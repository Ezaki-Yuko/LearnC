//标准库函数(涵盖在C语言内部的标准库)
//标准不光规定了语法 也规定了标准库(一组库函数)C89->C99->C11
//C和C++标准库都比较弱
//第三方库函数 操作系统提供的函数和其他数不尽的第三方库 GitHub上可找
//自定义函数(自己写的)

#include<stdio.h>
#include<stdlib.h>
//返回x,y中的最大值
//函数的定义
int Max(int x, int y) {//形式参数
	if (x > y) {
		return x;
	}
	return y;
}

int main() {//返回类型 函数名 (函数参数)
	//函数的调用
	int ret = Max(10, 20);//实际参数
	printf("%d\n", ret);
	//可以多次调用Max,互相不影响
	system("pause");
	return 0;
}

//stdlib.h这个头文件中,已经定义了一个max的宏 如果再定义一个名为max的函数,名字就冲突; 
//区分大小写 max/Max min/Min
//vs中跳转到定义:Ctrl+鼠标左键/F12

//写一个函数交换两个整形变量的内容
//函数的形参和实参的关系:形参是实参的一份拷贝
/*错误写法1
void Swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}
*/
/*错位写法2
int* temp=x;
x=y;
y=temp;
*/


void Swap(int* x, int* y) {//x是地址0x100,*x是地址指的那片内存中的值
	int temp = *x;//找到a这块内存中的10赋值给temp
	*x = *y;
	//*x就是根据a的地址找到了a这个变量 *x和a是等价的
	//*y和b也是等价的
	//指针是一种变量,变量里存的是一个整数,这个整数具有特殊的含义,是内存的一个地址,
	//根据这个地址,找到这块内存,读取或修改这个内存的内容
	*y = temp;
}
int main() {
	int a = 10;
	int b = 20;
	Swap(&a, &b);

	printf("a=%d,b=%d\n", a, b);

	system("pause");
	return 0;
}
//使用参数传指针的方式,可以做到让函数内部来操作a和b
//参数传指针的方式可以让一个函数内部修改函数外部的变量.这样的参数称为"输出型参数"
//函数的形参是实参的一份拷贝,一旦传参之后,形参无法影响实参,除非传指针

//写一个函数,每调用一次这个函数,就会将num的值增加
//num是实参,x是形参
//形参是实参的拷贝
void Func(int* x){
	*x += 1;
}

int main() {
	int num = 0;
	Func(&num);
	printf("%d\n", num);
	system("pause");
	return 0;
}




