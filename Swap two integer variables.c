//1.�����������ͱ���,������ֵ�����ݽ��н���
//2.����������ʱ����,����������������
//��һ��

#include<stdio.h>
#include<stdlib.h>

int f21() {
	int a = 5, b = 6;

	printf("a=%d,b=%d\n", a, b);
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}

//�ڶ���
int f22() {
	int a = 5, b = 6;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d\n",a,b);
	system("pause");
	return 0;
}











