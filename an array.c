#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//数组的排序
//冒泡排序
//从0号元素出发,比较相邻的两个元素的大小,是否符合升序要求,如果不符合就交换
void BUbbleSort(int arr[],int size) {
	//以每次找最小为例
	//[0,bound),已排序区间
	//[bound,size)待排序区间
	//每次找一个最小值放到前面去,也就意味着已排序区间就多一个元素
	//待排序区间就少一个元素
	for (int bound = 0; bound < size; bound++) {
		//还需要一重循环,这个循环就负责找到当前待排序区间的最小值
		//并放在bound位置上
		for (int cur = size - 1; cur > bound; cur--) {
			//比较相邻元素 如果不符合升序规则就交换
			//升序降序只需要改下面那行的大于小于号
			if (arr[cur - 1] > arr[cur]) {
				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}
int main() {
	int arr[4] = { 9,5,2,7 };
	BUbbleSort(arr, 4);
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
//数组如果作为函数参数,那就回隐式转成指针变量.(指向数组的首元素)
void Func(int arr[]) {
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
}
int main5() {
	int arr[4] = { 9,5,2,7 };
	Func(arr);
	return 0;
}
int main4() {
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8,},
		{9,10,11,12},
	};
	for (int i = 0; i < 3; i++) {
		//shift+alt+r:rename对话框(VA插件)
		//VS上没办法用以上方法更改注释内的i
		//arr[i]就得到了一个长度为4的一维数组
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
//二维数组也是一个一维数组,只不过数组的每个元素,又是一个一维数组
int main3() {
	//长度为3的一维数组,每个元素长度为4
	//无论是几维数组,定义的时候永远都只有第一个[]的数字可以省略,其他都不能省略
	int str[3][4] = {
		//逗号表达式,值就是最后一个元素的值
		//输出2,6,0,0,0,0,0,0....
		(1,2),
	    (5,6),
		//如果()换成{}输出1 2 0 0 5 6 0 0 0 0 0 0
		//不加括号就是1 2 5 6 0 0 .....补全0 
	};
	system("pause");
	return 0;
}

//批量创建一组相同类型的变量 
int main2() {
	int arr[] = { 9,5,2,7 };
	for (int i = 0; i <4 ; i++) {
		//%p是专门用来打印地址的(指针变量的)
		//按照十六进制的方式来打印
		//在内存中是连续的
		printf("%p\n", &arr[i]);
	}
	system("pause");
	return 0;
}
int main1() {
	//未定义行为
	char str[] = { 'a','b','c' };
	//数组下标越界之后都没有找到\0
	//所以strlen只能用于字符串
	//[]下标引用
	printf("%d\n", strlen(str));
	system("pause");
	return 0;
}