//函数可以没有参数和返回值void
//static三种用法：修饰一个局部变量 生命周期变为跟随整个程序
//修饰一个全局变量 修改作用域 变为当前文件
//修饰函数 修改作用域 变为当前文件
/*
#include<stdio.h>
#include<stdlib.h>
//函数声明，没有函数体，只是一个空头支票，告诉编译器存在这样一个函数
//1.告诉编译器存在一个名字为Add的函数
//2.这个函数有两个参数，都是double类型
//3.这个函数还有一个返回值，类型也是double
extern double Add(double x, double y);

int main() {
	double  a = 10.0;
	double  b = 20.0;
	double  c = Add(a, b);
	//%d打印十进制有符号的整数 三个要素缺一不可
	//%f就能打印一个浮点数.
	printf("c=%f\n", c);

	system("pause");
	return 0;

}
double Add(double x, double y) {

	int sum = x + y;
	//return x + y;
	return sum;
}
//warning警告（声明函数） error错误
//要把警告当成错误来处理，我们应该要消灭代码中的警告.
//版本管理工具 查看到每一行代码都是谁改的
//函数定义要在函数调用的上方，否则就会出现找不到定义的情况
//如果非要放在下面，需要在上方加上函数声明.
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//使用宏 可以定义一个常量
//借助宏来重定义一下类型的别名
//宏还能影响到编译器的行为.#define _CRT_SECURE_NO_WARNINGS必须放在include的上面 scanf
//宏还能定义一个代码片段（类似于函数的效果）
//........
//宏的本质相当于文本替换
#define SIZE 5

//typedef unsigned int unit;
#define unit unsigned int

int main() {
	//printf("SIZE=%d\n", SIZE);
	//system("pause");
	unit a = 10;

	scanf("%d\n", &a);
	system("pause");
	return 0;
}
*/
//#define Add(x,y)x+y
//文本替换 相当于是Add(x,y)替换x+y
//没有类型
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	//printf("%d\n", Add(10, 20));

	int x = 10;
	int* p = &x;
	printf("%d\n", *p);
	//*p和int* p  *出现了两次，但是两个*截然不同
	//下面的*叫做：“间接访问操作符”也叫作“解引用操作符”
	//下面的*p 根据指针 p 中存的地址，找到这个地址中对应的内容（x）
	//x是四个字节，取地址得到最小的那个（0X100）
	//变量 p 就是一个指针类型的变量，存的是地址
	//建议指针变量写作int* p，而不要写作int *p
	//因为我们的int* 在C语言中就是一种单独的数据类型，和int double float都是并列的关系
	// p是int*类型的

	system("pause");
	return 0;
}
//C语言中真正难的不是指针，而是对内存的理解
//Java不用太关注内存 简化学习
//要想理解指针要先理解内存
//计算机 CPU 存储器（内存外存） 输入设备 输出设备
//直观的把内存想象成我们的宿舍走廊，走廊上有很多个房间
//每个房间大小1个字节（）8bit，每个房间门上贴着门牌号
//门牌号从0开始，依次往上累加（由于我们的内存还挺大）
//平时我们看到的房间号也可能是一个比较大的数字，这样的数字，叫做“地址”
//指针也是一个变量，这个变量中保存了一个整数，这个整数具有一个特定的含义，
//表示内存中的一个地址
//指针变量本身也占有内存空间（变量）
//10=>十进制数字
//0x10=>十六进制数字 0x/0X开头的 ABCDEF
//我们习惯上使用十六进制来表示地址
*/

//结构体是一种用户自定义的类型. 
//可以借助现有的类型组合拼装一下，就能构成新的自定义类型
/*
#include<stdio.h>
#include<stdlib.h>
//此时相当于创建了一种新的类型 struct Student
struct Student {
	//成员/属性/字段（下面三行）
	char name[20];
	int age;
	int score;
};

int main() {
	struct Student s = {"张三",18,100};

	//对于结构体，最核心的使用方式是使用它的成员
	// . 成员访问运算符

	//打印一个字符串
	printf("%s\n", s.name);
	//也可以进行修改
	s.age = 20;
	printf("%d\n", s.age);
	printf("%d\n", s.score);
	system("pause");
	return 0;
}
*/


//分支语句和循环语句
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	//空语句 一行只有 ;
	//多分支语句
	//if语句中的{}可以省略 但是else的下一行语句不论条件是否满足都会输出
	//换句话说if else 如果没有{}只有一个语句是条件分支中的代码
	//建议加大括号
	int choice = 0;
	printf("你会认真写代码吗？1表示会，0表示不会，2表示家里有矿：");
	scanf("%d", &choice);
	if (choice == 1) {
		printf("你会拿到好offer！\n");
	}
	else if(choice==0){
		printf("回家卖红薯吧！\n");
	}
	else if (choice == 2) {
		printf("您开心就好！\n");
	}
	else {
		printf("您的输入有误!\n");
	}
    system("pause");
	return 0;
}

*/
//真（true）/假（false）=>命题

//choice==1就是个命题



//两种大括号的风格都可以 无强制要求 但必须保证代码风格一致 大括号另起一行 或者跟着上一行
//大部分编程语言推荐写在同一行（Java）
//还有些语言强制必须把{写在同一行（GO）

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	//C语言中非零值用来表示真，0用来表示假
	//为真执行if语句，为假执行else
	int choice = 0;
	printf("你会认真写代码吗？1表示会，0表示不会：");
	scanf("%d", &choice);
	//printf("%d\n", choice == 1);
	if (choice) {
		printf("hehe\n");
	}
	else {
		printf("haha\n");
	}
	system("pause");
	return 0;
}

//避免悬空else 要规范的加大括号{}

*/


/*
//判断一个数是否为奇数
//返回1表示是奇数，返回零表示是偶数 最好按照规范
//给函数命名尽量不要用汉语拼音
#include<stdio.h>
#include<stdlib.h>
int IsOdd(int x) {
	//最好写成x%2==0而不是1 如果是1的话当x==-11就不余1，而是-1，就不是奇数了
	if (x % 2 == 0) {
		return 0;
	}
	return 1;
}

int main() {

	printf("%d\n", IsOdd(11));

	system("pause");
	return 0;
}
*/

/*
//输出1-100之间的奇数

#include<stdio.h>
#include<stdlib.h>

int IsOdd(int x) {
	if (x % 2 == 0) {
		return 0;
	}
	return 1;
}

int main() {

	int num = 1;
	while (num <= 100) {
		if (IsOdd(num)) {
			printf("%d\n", num);
		}
		num += 1;
	}

	system("pause");
	return 0;
}

*/


/*
//switch也是分支语句，更适合去表示多分支的情况
//用户输入一个1-7的整数
//如果输入1就打印星期一
//输入2就打印星期二
//........

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("请输入今天是星期几（1-7）：");
	int day = 0;
	scanf("%d", &day);
	//switch(你要去进行多分支判断的变量)
	switch (day) {
	case 1:
		//变量所匹配的值
		printf("星期一！\n");
		break;      //至关重要
		//break跳出当前的switch语句
	case 2:
		printf("星期二！\n");
		break;
	case 3:
		printf("星期三！\n");
		break;
	case 4:
		printf("星期四！\n");
		break;
	case 5:
		printf("星期五！\n");
		break;
	case 6:
		printf("星期六！\n");
		break;
	case 7:
		printf("星期天！\n");
		break;
	default :
		printf("您的输入有误！\n");
		break;
	}
	//
	system("pause");
	return 0;
}

//switch括号中的变量，只能填整数
//break语句 不能遗漏
//switch不太能表达复杂的条件
//switch也支持嵌套 但非常丑
//switch 能完成的工作 if-else也完全可以胜任
//优先考虑使用if-else，少数特别的情况再使用switch
*/


/*
//判断周内还是周末
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("请输入今天是星期几（1-7）：");
	int day = 0;
	scanf("%d", &day);
	//switch(你要去进行多分支判断的变量)
	switch (day) {
	case 1:
		//变量所匹配的值
		  //至关重要
		//break跳出当前的switch语句
	case 2:
	case 3:
	case 4:
	case 5:
		printf("周内！\n");
		break;
	case 6:
	case 7:
		printf("周末！\n");
		break;
	default:
		printf("您的输入有误！\n");
		break;
	}
	system("pause");
	return 0;
}
*/
/*
//循环语句 while for do..while
//while从1打印到10
#include<stdio.h>
#include<stdlib.h>

int main() {

	int num = 1;
	//如果while后面加;什么也不会打印出来 无限循环死循环
	//while(num<=10)
    //;空语句
	//不要省略大括号
	//while执行的基本过程
	//1.判定while循环条件
	//2.如果条件成立，执行循环体
	//3.如果条件不成立，结束循环
	//4.如果循环体执行完了，再次判定循环条件
	while (num <= 10) {
		printf("%d\n", num);
		num += 1;
	}

	system("pause");
	return 0;
}


*/

//break 跳出当前的循环语句，结束整个循环
//continue 结束这次循环，直接进入下一次循环
#include<stdio.h>
#include<stdlib.h>

int main() {
	//从1-100中找到第一个被3整除的整数
	//从1-100中找到所有被3整除的整数
	int num = 1;
	/*
	while (num <= 100) {
		if (num % 3 != 0) {
			
			num++;
			continue;
			
		}
		printf("%d\n", num);
		num++;
	}
	*/
	while (num <= 100) {
		if (num % 3 == 0) {

			printf("%d\n", num);
		}
	     num++; 
	}
	system("pause");
	return 0;
}















