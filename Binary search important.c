
//写一个函数,实现一个整型有序数组的二分查找
#include<stdio.h>
#include<stdlib.h>
//通过这个函数来完成二分查找
//在非常疲惫和紧张的情况下,仍然能在纸上写出来
//数据结构,链表相关问题,排序相关问题,要求同上
//数组是有序的
//C语言中的数组作为函数参数的时候,会隐式转成指针,指向数组首元素的指针(bug 但为了保证兼容性不改)
//数组很多时候都能隐式转成指针
//有些时候指针的使用和数组非常相似,也能[]取下标
int BinarySearch(int arr[],int size,int toFind) {
	int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) -1 是错误的  4/4-1隐式转成指针后,sizeof出错
	int right =size- 1;//最后一个元素的下标
	//[left,right]前闭后闭区间 待查找区间
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] > toFind) {
			//在左边找
			right = mid - 1;
		}
		else if (arr[mid] < toFind) {
			//右边找
			left = mid + 1;
		}
		else {
			//找到了
			return mid;
		}
	}
	return -1;
}





