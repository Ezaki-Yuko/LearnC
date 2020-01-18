//常量是指程序运行过程中，值不能发生改变。
//VAX插件 代码模板：把一些经常写的固定的代码配置成代码模板
//通过一个简短的快捷键来触发补全
//#include<stdio.h>
//#include<stdlib.h>

//int main() {

	//a的修改是发生在运行过程
	//Ctrl+F5：编译：把.c文件=>.exe生成可执行文件
	//运行：相当于双击.exe
	//const是C语言中的一个“关键字”，表示接下来定义的
	//这个就是一个常量（a的值不能在运行过程中发生修改）
	//关键字：C语言中一些具有特定含义的单词符号。
	//（int double if struct const）关键字不能作为变量名int int = 10;
	//VS错误提示功能有问题，说了不算，算了不说
	//生成错误是在编译过程中出现错误
	//const int a = 10;
	//printf("a = %d\n", a);
	//%d格式化字符串
	//a = 20;
	//printf("a = %d\n", a);

	//system("pause");
	//return 0;
//}
//C语言中表示常量的方式
//1.const 2.字面值（0.0，10，'a','abcd'）3.enum枚举
//枚举创建三个常量Sex （0，1，2依次加一）4.宏#define
//宏在C语言中相当于特种部队，具有很多非常神奇的功能
//只有define不是关键字，#define宏定义的语法
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//类型
enum Sex {
	MALE,
	FEMALE,
	UNKNOWN,
};

int main() {

	printf("%d\n", MALE);
	//MALE = 100;
	//编译出现生成错误，说明枚举也是常量
	printf("%d\n", FEMALE);
	printf("%d\n", UNKNOWN);

	system("pause");
    return 0;
}


//宏#define
//#include<stdio.h>
//#include<stdlib.h>

//#define A 10 
//没有赋值符号，没有分号
//int main() {

	//printf("%d\n", A);
	//A = 20;
	//不可更改

	//system("pause");
		
	//return 0;
//}



//字符是各种字母，阿拉伯数字，各种标点符号
//使用数字来表示字符 ASCII码表
//字符串就是把一串字符放在一起 
//使用双引号表示字符串
// "hehe";"%d\n"
//printf("\n"); \n就是一个转义字符 表示换行
//在屏幕上打印路径目录
//printf("D:\\test.txt\n");
// \\表示一个\
// \t 也是一个转义符，表示水平制表符
//printf("My name is \"Fanyuxuan\"");
//转义输出\"双引号里的双引号
//例题
//当前校招主流的笔试题是编程题 给定一些问题场景 写一段代码
//来解决这个问题
//#include<stdio.h>
//#include<stdlib.h>

//int main(){

	//%d打印一个整数，十进制有符号
	//strlen求一个字符串的长度
	//printf("%d\n",strlen ("abcdef"));
	//6
	//printf("%d\n",strlen("C:\test\328\test.c"));
	// \32被解析成一个转义字符
	//system("pause");
	//return 0;
//}
//注释提示程序员 不参与运行编译
/*
/*
   多行注释
   多行注释
   多行注释
*/
//*/避免嵌套注释
//快速注释代码Ctrl+k Ctrl+c
//快速放开代码Ctrl+k Ctrl+u
//注释最好用中文 不要有敏感词汇负面情绪
//注释不要太长也不要太短
//注释必须要和代码内容一致
//CPU可以数学运算和逻辑判断
//选择语句也叫作条件语句和分支语句


//这个宏必须放在文件的最上方
//这个宏最好复制粘贴 手敲容易敲错
//赋值的时候要在“输出窗口”中复制
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){

	printf("你会认真敲代码吗？1表示愿意，0表示不愿意：");
	int choice = 0;
	//用户进行输入scanf 把用户输入的内容读到choice中
    //输入输出函数在头一个头文件中
	//用户输入的类型也必须是一个十进制有符号的%d
	//&叫做取地址符号.
	scanf("%d",&choice);
	//不安全scanf_s也并不安全
	// == 表示 比较相等
	// = 表示赋值
	if (choice == 1) {
		//如果（）中的条件成立，就执行{}中的代码
		printf("你会拿到好offer！\n");
	}
	else {
		//如果条件不成立，就执行else{}中的代码
		printf("回家卖红薯吧！\n");
	}

	system("pause");

	return 0;

}
*/

//循环语句 while for do...while goto 
/*#include<stdio.h>
#include<stdlib.h>

int main() {
    //打印1-10
	int num = 1;
	//如果条件成立，就执行循环体代码.
	//如果条件不成立，就结束循环.
	while (num<=10) {
		printf("%d\n", num);
		num = num + 1;
		//num + = 1;
		//在C 语言中等价
	}
	system("pause");
	return 0;
}
*/
//函数：一个代码片段，可以重复在很多地方去使用,简化代码，代码复用
// 可以自己创建一个函数

//#include<stdio.h>
//#include<stdlib.h>
//函数的定义（创建一个新函数）
//int 函数的返回值类型. 返回值就是生产出来的产品
//Add 函数名 函数相当于一个工厂
//int x, int y,函数的参数 工厂生产时候用到的原材料
//{}函数体 加工过程
//命名 见名知意
/*
int Add(int x, int y){
	// sum变量 
	int sum = x + y;
	//return 表示函数返回了，（函数结束了）
	return sum;
}

int main() {
	int a = 10;
	int b = 20;
	//函数的调用/使用
	int c = Add(a, b);
	printf("%d\n", c);
	system("pause");
	return 0;
}
*/
//数组：帮我们批量创建一组相同类型的变量.
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
	//int 批量创建一组都是int类型的变量 arr是数组的名字 [10]表示创建10个int变量
	//如果初始化的时候数字个数比较少，把前几个变量设置初值了，后面的剩下的变量都是初始化为0
	int arr[10] = { 1,2,3,4};
	//数组的使用核心操作[ ]取下标操作.
	//数组下标，是从0开始计数的.
	//下标越界.是一种典型的错误代码，得到的结果不可预期.
	printf("%d\n", arr[10]);

	system("pause");
	return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
	//一种特殊的数组.字符数组
	char arr[10] = { 'h','e','h','e' };
	//字符组有一种特殊的用法，用来表示字符串
	//C语言中字符串不是一种单独的数据类型，而是用字符数组来表示
	//字符串是一种特殊的字符数组，这个字符数组一定是以'\0'结尾的，
	//如果一个字符数组没有包含'\0'那么就不是字符串.
	// \0 表示ASCII码表中值为0的字符.（空字符NULL）
	char arr2[10] = "hehe";

	system("pause");
	return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
typedef unsigned int uint;
//typedef 类型重命名
int main() {
	//加了unsigned就变成无符号的整数，
	unsigned int num = 1;
	uint num2 = 10;

	system("pause");
	return 0;
}
*/
//static在C语言中主要有三种用法：
//1.修饰一个局部变量 修改生命周期为整个程序
//2.修饰一个全局变量.修改的变量的作用域，只能在当前文件中访问，不能跨文件访问
//3.修饰一个函数 和修饰全局变量是一样的 修改了作用域为当前文件中访问
//void Func(){
	//static int x = 1;
	//每次保留上次的结果
	//x = x + 1;
	//printf("%d\n", x);
//}
//x的生命周期在当前代码块里，互不干扰（）无static
//void表示函数没有返回值 工厂没有产出
//当我们访问另外一个文件的全局变量的时候，需要加上变量的声明
//extern int global;
//如果注销掉另一个文件的global定义，无法解析外部符号 链接错误，只有声明 没有定义
//当static修饰一个全局变量，修改了变量的作用域，错误同上
//int main() {
	//Func();
	//Func();
	//Func();
	//printf("%d\n", global);

//	system("pause");
//	return 0;
//}



