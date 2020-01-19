//分支语句 if switch
//if后面的括号里面是条件 条件成立 就执行if括号后面的代码，不成立就执行else
//所谓的成立不成立使用真和假来表示 非零就是真 零是假
//switch括号里的变量必须是整型变量 break不能忘 分支会继续往下执行
//
//循环
//continue就继续下一次
//while（具体的循环条件）{条件成立就执行}不成立就结束了循环
//for循环与while循环之间可以相互转换
//for循环相比于while循环具有一定的优势
//for（初始化部分 只执行一次 ;条件判断语句 ;调整部分 循环更新）
/*
#include<stdio.h>
#include<stdlib.h>

int main() {
	//打印1-10
	int num = 1;
	while (num <= 10) {
		printf("%d\n", num);
		num++;//更新语句
	}

	//打印1-10 for版本
	for (int num = 1; num <= 10; num++) {
		printf("%d\n", num);
	}
	//for循环把循环初始化，循环条件，循环变量更新语句，放在一起 不容易遗漏
	//for执行的流程：1.初始化语句（int num=1）2.循环条件（num<=10）3.循环体（printf）4.循环变量更新语句（num++）5.表达式二
	//break在while和for中体现是一样的
	//continue
	//while中的continue接下来执行的是判定循环条件
	//for中的continue接下来执行的是，表达式3，然后再是表达式2



	system("pause");
	return 0;
}

*/

/*
#include<stdio.h>
#include<stdlib.h>

int main() {
	//找1-100中所有3的倍数
	
	int num = 1;
	while (num <= 100) {
		if (num % 3 != 0) {
			//不是3的倍数
			num += 1;
			continue;//遇到continue执行循环条件num<=100，不能缺num++
		}
		//是3的倍数
		printf("%d\n", num);
		num += 1;
		}
		
	for (int num = 1; num < 101; num += 1) {
		//表达式1可以没有 写在for的上一行作用域发生改变 不仅在for循环里，而是在main函数里
		//表达式3也可以省略，省略后格式类似于while
		//表达式2也可以省略，两个分号不可以省略，默认为真，一直执行
		if (num % 3 != 0) {
			continue;//continue之后执行表达式3，再执行表达式2，又会回到num++
		}
		printf("%d\n", num);
	}

	system("pause");
	return 0;
}

//建议 合适的时候也可以前闭后闭
//尽量不要在循环体内修改循环变量
//[1,100]前闭后闭，包含1，也包含100
//[1,100)前闭后开，包含1，不包含100
//for循环控制变量的取值尽量采用前闭后开
//灵活不见得是好事，更容易出错，往往会进行一些约束
//业界通用的做法 以后接触的区间这样的概念大部分默认都是前闭后开的方式表
//并不是所有的for（；；）都是死循环
//if(num>0){break;}就可以结束循环了
//可以在一个循环中用两个循环
//C语言中的所有的标点符号都是英文符号
//写代码要选择合适的字体，要让各种字符之间区分度比较高
// 

*/

/*
//搜狗
//360 笔试题
#include<stdio.h>
#include<stdlib.h>

int main() {
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k == 0; i++, k++) {
		//k=0;是赋值语句,条件值为0,条件是假 不执行循环
		//条件是比较还是赋值,如果是比较k==0就循环了一次
		k++;
		printf("hehe\n");
	}
	system("pause");
	return 0;
}
*/

/*
//do..while循环

#include<stdio.h>
#include<stdlib.h>

int main() {
	//打印1=10
	int num = 1;
	do {
		printf("%d\n", num);
		num += 1;


	} while (num<=10);

	system("pause");
	return 0;
}

//do...while 先循环再判断

*/
//练习题
/*
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Factor(int n) {
	int result = 1;
	for (int i = 1; i <= n; i += 1) {
		result *= i;

	}
	return result;
}


int main() {
	//计算n的阶乘
	//printf("请输入一个N:");
	//int n = 0;
	//scanf("%d", &n);
	//int b=Factor(n);
	//printf("reslut=%d\n", b);

	//计算1!+2!+3!+...+10!
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += Factor(i);
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

//10!经常出现 计算量很大的数字可以背下来
//缓存(cache)计算机中常见的思想方法

*/

/*
//演示多个字符从两端移动,向中间汇聚
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//Windows系统函数
#include<Windows.h>


int main() {
	char str1[] = "Welcome to bit!";
	char str2[] = "###############";

	int left = 0;
	int right = strlen(str1)-1;
	while (left <= right) {
		str2[left] = str1[left];
		str2[right] = str1[right];
		left += 1;
		right -= 1;
		//cls:clear screen cmd的命令 清屏
		//动画就是图片的不断清屏
		system("cls");
		printf("%s\n", str2);
		Sleep(500);
		//单位是毫秒

	}
	system("pause");
	return 0;
}

//Sleep表示睡眠,程序要放弃CPU,来休息一会儿
//Sleep和strlen,printf,system有本质的区别
//strlen等C语言的标准库函数
//Sleep操作系统的函数 只有Windows系统可以用 单位是毫秒(ms)
//Linux上的Sleep函数是sleep 单位是秒(s)

*/


/*
//模拟用户登录情景,只能登陆三次,只允许输入三次密码,均错误则退出登录
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	//VC6 bug 作用域 可以不需要把i的定义拖出来
	//输入一个密码
	int i = 0;//放到外面就不仅仅作用于for循环体了
	for (; i < 3; i++) {
		char password[1024] = { 0 };
		printf("请输入密码:");
		scanf("%s", password);
		//字符串也能比较大小.ASCII码先比第一个字符 依次往后 字典序
		//strcmp就是按照 字典序 比较字符串大小
		//如果 第一个字符串 小于 第二个,返回<0的整数.
		//如果 第一个字符串 大于 第二个,返回>0的整数.
		//如果相等 返回0
		if (strcmp(password, "888888") == 0) {
			//密码字典
			printf("登陆成功!\n");
			break;
			//
		}
		else {
			printf("您的输入有误,请重试!");

		}

	}
	if ( i == 3) {
		printf("您已经输错三次!\n");
	}
	
	system("pause");
	return 0;
}

*/

/*
//顺序查找
#include<stdio.h>
#include<stdlib.h>

int main() {
	//给定一个数组 去查找某个数字是否在数组中存在
	int arr[] = { 9,5,2,7 };
	//数组在定义的时候[]里面的数字可以省略的
	//如果在初始化的时候可以指定里面的长度就可以省略
	//9527(LZSb)
	//tql太强了 cy插眼
	//百度贴吧 中国互联网里程碑 文化领域典型代表
	int toFind = 2;
	for(int i = 0; i < 4; i++) {
		if (arr[i] == toFind) {
			printf("找到了!下标是:%d\n", i);
			break;
		}
	}

	system("pause");
	return 0;
}

*/

//针对一个有序的数组 可以使用二分查找 也叫折半查找 加快效率
//有序:升序(从小到大),降序(从大到小)


/*
//这个代码非常重要
#include<stdio.h>
#include<stdlib.h>

int main() {

	int arr[] = {1,3,4,5,6,7,8,9};
	int toFind = 2;
	//折半查找 针对有序数组

	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	//sizeof(arr)求arr的字节数 
	//代码的可维护性,代码是经常需要改动的
	//改动越小,可维护性越高
	//C++里 arr.size()
	//Java里arr.length
	//Python里len(arr)
	//[left,right]待查找区间 重合也有元素
	while (left <= right) {
		int mid = (left + right) / 2;
		//可读性
		if (arr[mid] < toFind) {
			//在右边找
			left = mid + 1;
		}
		else if (arr[mid] > toFind) {
			//在左边查找,更新right
			right = mid - 1;
		}
		else {
			//找到了
			printf("找到这个元素啦,下标是:%d\n",mid);
			break;
		}

	}
	if (left > right) {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}

*/


//猜数字游戏 1-100之间的数字
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Game() {
	//1.系统自动生成一个数字,随机数
	//时间是一直在变的
	//随机种子不能固定,里面最好是每次都发生变化的种子
	//time_t=>unsigned long long 
	//srand=>unsigned int
	//强制类型转换
	//每次启动程序的种子都不一样
	//50年消耗了15亿
    //70年=>2040年左右 时间戳范围大过int
	//time函数得到的结果称为时间戳
	//时间戳:以我们的1970年1月1日0时0分0秒作为基准时间,计算当前时刻和基准时刻的秒数之差
	int toGuess = rand() % 100 + 1;
	//可以每次运行设置不同的初始值,得到的随机数序列就不同了,随机性就更高了
	//不同的随机种子来制造不同的随机数
	//计算机中随机数是伪随机
	//每次打开运行都一样
	while (1) {
		//2.让用户输入一个整数
		printf("请输入一个整数(1-100):");
		int num = 0;
		scanf("%d", &num);

		if (num < toGuess) {
			printf("低了!\n");
		}
		else if (num > toGuess) {
			printf("高了!\n");
		}
		else {
			printf("恭喜你,猜对了!\n");
			break;
		}
	}
}



int main() {
	srand((unsigned int)time(0));
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else {
			printf("goodbye!\n");
			break;
		}
	}
	system("pause");
	return 0;
}


int Menu() {
	printf("===============\n");
	printf("1.开始游戏!\n");
	printf("2.退出游戏!\n");
	printf("===============\n");
	printf("请输入您的选择:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

//调试一定要在Debug中进行
//打断点:在某行前面鼠标单击,出现一个红色圆点
//Ctrl+F5不可以(运行不调试) 调试是F5
//有箭头的圆圈就是该运行该有断点的这一行
//Ctrl+鼠标左键可以定位函数名的函数块
//继续打完断点后F5,就是程序跑到这一行,接下来就执行打断点的这一行
//继续在高了,低了,结束了打断点,通过圆圈内的箭头,来判断程序该跑到哪一行了















